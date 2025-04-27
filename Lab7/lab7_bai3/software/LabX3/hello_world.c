#include "sys/alt_stdio.h"
#include <stdio.h>
#include <string.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_timer_regs.h"
#include "sys/alt_irq.h"
#include "io.h"
#include "unistd.h"
#include "altera_avalon_uart_regs.h"
#include "altera_avalon_uart.h"

// Bang ma led 7 doan cho so 0-F
const unsigned char hex_table[16] = {
    0xC0, // 0
    0xF9, // 1
    0xA4, // 2
    0xB0, // 3
    0x99, // 4
    0x92, // 5
    0x82, // 6
    0xF8, // 7
    0x80, // 8
    0x90, // 9
    0x88, // A
    0x83, // B
    0xC6, // C
    0xA1, // D
    0x86, // E
    0x8E  // F
};

// Bien toan cuc
int hh = 23, mm = 59, ss = 30;          // Gio, phut, giay
int dd = 31, month = 12, year = 2025;   // Ngay, thang, nam
int display_mode = 0;                   // Che do hien thi led: 0 = gio, 1 = ngay
int display_time = 0;                   // Dem thoi gian hien thi (giay)
int edit_mode = 0;                      // Che do chinh sua: 0 = binh thuong, 1 = chinh gio

// Ham gui lenh toi LCD
void lcd_command(char data) {
    IOWR(LCD_RS_BASE, 0, 0x00);
    IOWR(LCD_RW_BASE, 0, 0x00);
    IOWR(LCD_DATA_BASE, 0, data);
    IOWR(LCD_EN_BASE, 0, 0x01);
    usleep(5);
    IOWR(LCD_EN_BASE, 0, 0x00);
    usleep(5);
}

// Ham gui du lieu toi LCD
void lcd_data(char data) {
    IOWR(LCD_RS_BASE, 0, 0x01);
    IOWR(LCD_RW_BASE, 0, 0x00);
    IOWR(LCD_DATA_BASE, 0, data);
    IOWR(LCD_EN_BASE, 0, 0x01);
    usleep(5);
    IOWR(LCD_EN_BASE, 0, 0x00);
    usleep(5);
}

// Ham hien thi chuoi ky tu tren LCD
void lcd_string(char *str) {
    char i = 0;
    while (str[i] != 0) {
        lcd_data(str[i]);
        i++;
    }
}

// Ham khoi tao LCD
void lcd_init(void) {
    usleep(15000);          // Doi 15ms
    lcd_command(0x38);      // Chon che do 8 bit, 2 dong
    usleep(4100);           // Doi 4.1ms
    lcd_command(0x38);      // Lap lai lenh
    usleep(100);            // Doi 100us
    lcd_command(0x38);      // Lap lai lenh
    usleep(2000);           // Doi 2ms
    lcd_command(0x0C);      // Bat hien thi, tat con tro
    usleep(2000);           // Doi 2ms
    lcd_command(0x01);      // Xoa man hinh
    usleep(2000);           // Doi 2ms
    lcd_command(0x06);      // Dich con tro sang phai
    usleep(2000);           // Doi 2ms
}

// Ham gui chuoi qua UART
void transmitString(char* mess) {
    while (!(IORD_ALTERA_AVALON_UART_STATUS(UART_0_BASE) & ALTERA_AVALON_UART_STATUS_TRDY_MSK));

    while (*mess) {
        IOWR_ALTERA_AVALON_UART_TXDATA(UART_0_BASE, *mess);
        mess++;
        usleep(600);
    }
}

// Ham nhan ky tu tu UART
char receiveChar() {
    alt_u8 status;
    char buff;

    status = IORD_ALTERA_AVALON_UART_STATUS(UART_0_BASE);

    if (status & ALTERA_AVALON_UART_STATUS_RRDY_MSK) {
        buff = IORD_ALTERA_AVALON_UART_RXDATA(UART_0_BASE);
        IOWR_ALTERA_AVALON_UART_STATUS(UART_0_BASE, 0);
        return buff;
    }

    return '\0';
}

// Ham khoi tao timer
void Timer_Init(void) {
    unsigned int period = 50000000 - 1; // 1 giay voi clock 50 MHz

    IOWR_ALTERA_AVALON_TIMER_CONTROL(TIMER_0_BASE, ALTERA_AVALON_TIMER_CONTROL_STOP_MSK);

    IOWR_ALTERA_AVALON_TIMER_PERIODL(TIMER_0_BASE, period);
    IOWR_ALTERA_AVALON_TIMER_PERIODH(TIMER_0_BASE, (period >> 16));

    IOWR_ALTERA_AVALON_TIMER_CONTROL(TIMER_0_BASE, ALTERA_AVALON_TIMER_CONTROL_CONT_MSK |
                                                  ALTERA_AVALON_TIMER_CONTROL_ITO_MSK  |
                                                  ALTERA_AVALON_TIMER_CONTROL_START_MSK);
}

// Ham xu constructeur timer
void Timer_IRQ_Handler(void* isr_context) {
    char lcd_buffer[17]; // Bo dem cho LCD

    // Cap nhat thoi gian neu khong o che do chinh sua
    if (edit_mode == 0) {
        ss++; // Tang giay
        if (ss >= 60) {
            ss = 0; // Reset giay
            mm++;   // Tang phut
        }
        if (mm >= 60) {
            mm = 0; // Reset phut
            hh++;   // Tang gio
        }
        if (hh >= 24) {
            hh = 0; // Reset gio
            dd++;   // Tang ngay
        }
        if ((month == 4 || month == 6 || month == 9 || month == 11) && dd > 30) {
            dd = 1;    // Reset ngay
            month++;   // Tang thang
        } else if (month == 2) {
            if (dd > 28) {
                dd = 1;    // Reset ngay
                month++;   // Tang thang
            }
        } else if (dd > 31) {
            dd = 1;    // Reset ngay
            month++;   // Tang thang
        }
        if (month > 12) {
            month = 1; // Reset thang
            year++;    // Tang nam
        }
    }

    // Hien thi gio tren LCD (can giua)
    lcd_command(0x80); // Dat con tro dong 1
    sprintf(lcd_buffer, "    %02d:%02d:%02d    ", hh, mm, ss); // 4 khoang trang truoc/sau
    lcd_string(lcd_buffer);

    // Hien thi ngay thang nam tren LCD (can giua)
    lcd_command(0xC0); // Dat con tro dong 2
    sprintf(lcd_buffer, "   %02d-%02d-%04d   ", dd, month, year); // 3 khoang trang truoc/sau
    lcd_string(lcd_buffer);

    // Hien thi luan phien tren 8 led 7 doan
    if (display_mode == 0) {
        // Hien thi gio-phut-giay (HHMMSS__)
        IOWR(LED8_BASE, 0, hex_table[hh / 10]);   // Gio - hang chuc
        IOWR(LED7_BASE, 0, hex_table[hh % 10]);   // Gio - hang don vi
        IOWR(LED6_BASE, 0, hex_table[mm / 10]);   // Phut - hang chuc
        IOWR(LED5_BASE, 0, hex_table[mm % 10]);   // Phut - hang don vi
        IOWR(LED4_BASE, 0, hex_table[ss / 10]);   // Giay - hang chuc
        IOWR(LED3_BASE, 0, hex_table[ss % 10]);   // Giay - hang don vi
        IOWR(LED2_BASE, 0, 0xFF);                 // Tat led 6
        IOWR(LED1_BASE, 0, 0xFF);                 // Tat led 7
    } else {
        // Hien thi ngay-thang-nam (DDMMYYYY)
        IOWR(LED8_BASE, 0, hex_table[dd / 10]);           // Ngay - hang chuc
        IOWR(LED7_BASE, 0, hex_table[dd % 10]);           // Ngay - hang don vi
        IOWR(LED6_BASE, 0, hex_table[month / 10]);        // Thang - hang chuc
        IOWR(LED5_BASE, 0, hex_table[month % 10]);        // Thang - hang don vi
        IOWR(LED4_BASE, 0, hex_table[year / 1000]);       // Nam - hang nghin
        IOWR(LED3_BASE, 0, hex_table[(year / 100) % 10]); // Nam - hang tram
        IOWR(LED2_BASE, 0, hex_table[(year / 10) % 10]);  // Nam - hang chuc
        IOWR(LED1_BASE, 0, hex_table[year % 10]);         // Nam - hang don vi
    }

    // Cap nhat che do hien thi
    display_time++;
    if (display_mode == 0 && display_time >= 8) {
        display_mode = 1; // Chuyen sang ngay-thang-nam
        display_time = 0; // Reset bo dem
    } else if (display_mode == 1 && display_time >= 2) {
        display_mode = 0; // Chuyen sang gio-phut-giay
        display_time = 0; // Reset bo dem
    }

    // Xoa bit trang thai timer
    IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_0_BASE, ALTERA_AVALON_TIMER_STATUS_TO_MSK);
}

int main() {
    // In thong bao khoi dong
    alt_putstr("Hello from Nios II!\n");

    // Bat LCD
    IOWR(LCD_ON_BASE, 0, 0x01);
    usleep(50000); // Doi 50ms

    // Khoi tao LCD
    lcd_init();

    // Khoi tao timer
    Timer_Init();

    // Dang ky ngat timer
    alt_ic_isr_register(0, TIMER_0_IRQ, Timer_IRQ_Handler, (void*)0, (void*)0);

    while (1) {
        // Doc trang thai SW0, KEY1, KEY2, KEY3
        int sw0 = IORD(SWITCH0_BASE, 0); // SW0: Che do chinh sua
        int sw1 = IORD(KEY1_BASE, 0);    // SW1: Tang gio
        int sw2 = IORD(KEY2_BASE, 0);    // SW2: Tang phut
        int sw3 = IORD(KEY3_BASE, 0);    // SW3: Tang giay

        // Kiem tra SW0 de bat che do chinh sua
        if (sw0) {
            edit_mode = 1; // Bat che do chinh sua
            // Tang gio neu SW1 bat
            if (sw1) {
                hh = (hh + 1) % 24; // Tang gio, gioi han 0-23
                usleep(500000);     // Doi 500ms de tranh tang qua nhanh
            }
            // Tang phut neu SW2 bat
            if (sw2) {
                mm = (mm + 1) % 60; // Tang phut, gioi han 0-59
                usleep(500000);     // Doi 500ms
            }
            // Tang giay neu SW3 bat
            if (sw3) {
                ss = (ss + 1) % 60; // Tang giay, gioi han 0-59
                usleep(500000);     // Doi 500ms
            }
        } else {
            edit_mode = 0; // Thoat che do chinh sua
        }

        // Nhan ky tu tu UART
        char rxData = receiveChar();
        if (rxData != '\0') {
            switch (rxData) {
                case 'S':
                    transmitString("Down\n"); // Phan hoi lenh S
                    break;
                case 'W':
                    transmitString("Up\n"); // Phan hoi lenh W
                    break;
                case 'A':
                    transmitString("Left\n"); // Phan hoi lenh A
                    break;
                case 'D':
                    transmitString("Right\n"); // Phan hoi lenh D
                    break;
                default:
                    break;
            }
        }
    }

    return 0;
}
