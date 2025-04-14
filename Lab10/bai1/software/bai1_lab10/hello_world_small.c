#include <stdio.h>
#include "system.h"
#include "altera_avalon_dma_regs.h"
#include "sys/alt_irq.h"
/// data8 points to a global array stored in onchip_memory2_0
char pdata8[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                   11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                   21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};

/// pdatad points to onchip_memory2_1
char* pdatad = (char*) (ONCHIP_MEMORY2_1_BASE);

/// Interrupt handler of DMA
void DMA_ISR_handler(void* context)
{
    int i;

    /// Read and print data in onchip_memory2_1
    for(i=0; i<32; i++)
    {
        printf("byte %d\n", pdatad[i]);
    }

    /// Clear DMA interrupt bit
    IOWR_ALTERA_AVALON_DMA_STATUS(DMA_0_BASE, 0);
}

/// Initialize function of DMA
void DMA_init(void)
{
    /// De-init DMA
    IOWR_ALTERA_AVALON_DMA_CONTROL(DMA_0_BASE, 0);

    /// Source address is pdatad
    IOWR_ALTERA_AVALON_DMA_RADDRESS(DMA_0_BASE, (int)pdata8);

    /// Destination address is pdatad
    IOWR_ALTERA_AVALON_DMA_WADDRESS(DMA_0_BASE, (int)pdatad);

    /// Length is 32 bytes
    IOWR_ALTERA_AVALON_DMA_LENGTH(DMA_0_BASE, 32);

    /// Configure and Start DMA
    IOWR_ALTERA_AVALON_DMA_CONTROL(DMA_0_BASE,
        ALTERA_AVALON_DMA_CONTROL_BYTE_MSK | /// Byte transfer
        ALTERA_AVALON_DMA_CONTROL_LEEN_MSK | /// End transaction when length reach zero
        ALTERA_AVALON_DMA_CONTROL_I_EN_MSK | /// Interrupt enable
        ALTERA_AVALON_DMA_CONTROL_GO_MSK); /// Start DMA
}

int main(void)
{
    /// Configure the DMA
    DMA_init();

    /// Register DMA's interrupt handler
    alt_ic_isr_register(0, DMA_0_IRQ, DMA_ISR_handler, (void*)0, (void*)0);

    while(1);
}
