//
//#include "sys/alt_stdio.h"
//#include "system.h"
//#include "io.h"
//
//
////int main()
////{
//// int temp;
////  alt_putstr("Hello from Nios II!\n");
////
////  /* Event loop never exits. */
////  while (1)
////  {
////	  temp = IORD(SWITCH_BASE, 0);
////	  IOWR(LED_BASE, 0, temp);
////  }
////
////  return 0;
////}

//part2
#include "system.h"

int main() {

    volatile short * LED_ptr = (short *) LED_BASE;
    volatile short * SW_ptr = (short *) SWITCH_BASE;

    short tmp;

    while(1) {
        tmp = *SW_ptr;
        *LED_ptr = tmp;
    }

    return 0;
}




