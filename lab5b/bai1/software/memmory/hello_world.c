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

#include <stdio.h>
#include "system.h"
int main(void)
{
	int* mPointer = (int*) MEMORY_0_BASE;
	int i;

	for (i=0;i<16;i++)
	{mPointer[i]=i;}

	for (i=0;i<16;i++){
	printf("du lieu tai o nho thu %d : %p la %d\n",i,&mPointer[i],mPointer[i]);
	}
	while(1);
	}
