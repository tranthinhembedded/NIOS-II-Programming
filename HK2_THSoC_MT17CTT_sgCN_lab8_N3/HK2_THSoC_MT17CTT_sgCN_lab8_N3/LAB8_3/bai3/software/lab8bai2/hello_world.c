/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include "sys/alt_stdio.h"
#include "system.h"
#include "unistd.h"
#include "stdio.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_uart_regs.h"

int main()
{
    int count = 0;
    int prev_button_state = 1;
    char buffer[3];

    printf("Start\n");

    while (1)
    {
        int button_state = IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE);


        if (button_state == 0 && prev_button_state == 1)
        {
            count = (count + 1) % 100;


            snprintf(buffer, sizeof(buffer), "%02d", count);


            printf("%s\n", buffer);


            IOWR_ALTERA_AVALON_UART_TXDATA(UART_0_BASE, buffer[0]);
            usleep(1000);
            IOWR_ALTERA_AVALON_UART_TXDATA(UART_0_BASE, buffer[1]);
            usleep(1000);
            IOWR_ALTERA_AVALON_UART_TXDATA(UART_0_BASE, '\n');
            usleep(1000);
        }

        prev_button_state = button_state;
        usleep(50000);
    }
}
