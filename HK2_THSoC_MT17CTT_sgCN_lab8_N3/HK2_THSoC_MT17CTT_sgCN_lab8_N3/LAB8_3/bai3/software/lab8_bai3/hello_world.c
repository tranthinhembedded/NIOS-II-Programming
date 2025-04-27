#include "sys/alt_stdio.h"
#include "system.h"
#include "unistd.h"
#include "altera_avalon_uart_regs.h"
#include "altera_avalon_uart.h"

void transmitString(char* mess) {
    while (!(IORD_ALTERA_AVALON_UART_STATUS(UART_0_BASE) & ALTERA_AVALON_UART_STATUS_TRDY_MSK));

    while (*mess) {
        IOWR_ALTERA_AVALON_UART_TXDATA(UART_0_BASE, *mess);
        mess++;
        usleep(600);
    }
}

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

int main() {
    char rxData;
    while (1) {
        rxData = receiveChar();

        if (rxData != '\0') {
            switch (rxData) {
                case 'S':
                    transmitString("Down\n");
                    break;
                case 'W':
                    transmitString("Up\n");
                    break;
                case 'A':
                    transmitString("Left\n");
                    break;
                case 'D':
                    transmitString("Right\n");
                    break;
                default:
                    break;
            }
        }
    }
}
