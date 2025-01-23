
#include <stdio.h>
#include "system.h"
#include "unistd.h"
#include "io.h"
#include "sys/alt_stdio.h"
void main() {
	int temp;
	while (1) {
	temp = IORD(SWITCH_BASE, 0);
	IOWR(LED_BASE, 0, temp);
}
}

