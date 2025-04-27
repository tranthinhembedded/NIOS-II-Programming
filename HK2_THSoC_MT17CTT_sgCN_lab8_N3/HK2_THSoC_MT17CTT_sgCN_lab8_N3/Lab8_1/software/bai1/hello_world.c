#include "sys/alt_stdio.h"
#include "system.h"
#include <unistd.h>
#include "stdio.h"
#include "altera_avalon_uart_regs.h"

char number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main()
{
    int i = 0;

    // Print initial messages
    alt_putstr("Hello from Nios II!\n");
    printf("Start\n");

    while(1)
    {
        for (i = 0; i < 100; i++)
        {
            IOWR_ALTERA_AVALON_UART_TXDATA(UART_0_BASE, number[i / 10]);
            usleep(1000);  // Wait to send data

            IOWR_ALTERA_AVALON_UART_TXDATA(UART_0_BASE, number[i % 10]);
            usleep(1000);  // Wait to send data

            IOWR_ALTERA_AVALON_UART_TXDATA(UART_0_BASE, '\n');
            usleep(1000000);  // Longer delay after sending newline
        }
    }

    return 0;  // This line is technically unreachable due to the infinite while loop
}
