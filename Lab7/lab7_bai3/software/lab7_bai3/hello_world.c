#include "sys/alt_stdio.h"
#include <stdio.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"

void lcd_command(char data) {
    IOWR(LCD_RS_BASE, 0, 0x00);
    IOWR(LCD_RW_BASE, 0, 0x00);
    IOWR(LCD_DATA_BASE, 0, data);
    IOWR(LCD_EN_BASE, 0, 0x01);
    usleep(5);
    IOWR(LCD_EN_BASE, 0, 0x00);
    usleep(5);
}

void lcd_data(char data) {
	 IOWR(LCD_RS_BASE, 0, 0x01);
	 IOWR(LCD_RW_BASE, 0, 0x00);
	 IOWR(LCD_DATA_BASE, 0, data);
	 IOWR(LCD_EN_BASE, 0, 0x01);
	 usleep(5);
	 IOWR(LCD_EN_BASE, 0, 0x00);
	 usleep(5);
}

void lcd_string(char *str) {
    char i = 0;
    while (str[i] != 0) {
        lcd_data(str[i]);
        i++;
    }
}

void lcd_init(void) {
    usleep(15000);
    lcd_command(0x38);
    usleep(4100);
    lcd_command(0x38);
    usleep(100);
    lcd_command(0x38);
    usleep(2000);
    lcd_command(0x0C);
    usleep(2000);
    lcd_command(0x01);
    usleep(2000);
    lcd_command(0x06);
    usleep(2000);
}

int main() {
    int hh = 23, mm = 59, ss = 30;
    int dd = 31, month = 12, year = 2025;
    char lcd_buffer[16];

    alt_putstr("Hello from Nios II!\n");

    IOWR(LCD_ON_BASE, 0, 0x01);
    usleep(50000);

    lcd_init();

    while (1) {
        lcd_command(0x80);
        sprintf(lcd_buffer, "%02d:%02d:%02d", hh, mm, ss);
        lcd_string(lcd_buffer);

        lcd_command(0xC0);
        sprintf(lcd_buffer, "%02d-%02d-%04d", dd, month, year);
        lcd_string(lcd_buffer);

        usleep(1000000);
        ss++;

        if (ss == 60) {
            ss = 0;
            mm++;
        }
        if (mm == 60) {
            mm = 0;
            hh++;
        }
        if (hh == 24) {
            hh = 0;
            dd++;
        }

        if ((month == 4 || month == 6 || month == 9 || month == 11) && dd > 30) {
            dd = 1;
            month++;
        } else if (month == 2) {
            if (dd > 28) {
                dd = 1;
                month++;
            }
        } else if (dd > 31) {
            dd = 1;
            month++;
        }

        if (month > 12) {
            month = 1;
            year++;
        }
    }

    return 0;
}

