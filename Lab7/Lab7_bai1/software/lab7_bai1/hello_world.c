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

//char lcd_buffer[32];
//int main() {
//    alt_putstr("Hello from Nios II!\n");
//
//    IOWR(LCD_ON_BASE, 0, 0x01);
//    usleep(50000);
//
//    lcd_init();
//
//    sprintf(lcd_buffer, "Hello from LCD");
//    lcd_string(lcd_buffer);
//
//    lcd_command(0xC0);
//    sprintf(lcd_buffer, "Lab LCD");
//    lcd_string(lcd_buffer);
//}

int main() {
    int i;
    char lcd_buffer[16];

    alt_putstr("Hello from Nios II!\n");

    IOWR(LCD_ON_BASE, 0, 0x01);
    usleep(50000);

    lcd_init();

    while (1) {
        for (i = 0; i < 100; i++) {
            lcd_command(0x80);
            sprintf(lcd_buffer, "Counter: %02d", i);
            lcd_string(lcd_buffer);
            usleep(500000);
        }
    }

    return 0;
}

