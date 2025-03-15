#include "system.h"
#include "stdio.h"

int main(void)
{
	printf("Program started\n");
	int* mPointer = (int*) MEMORY_0_BASE;
    int i;

    // Ghi du lieu vao bo nho
    for (i=0; i<16; i++)
    {
        mPointer[i] = i;
    }

    // Doc du lieu tu bo nho
    for (i=0; i<16; i++)
    {
        //printf("Du lieu tai o nho thu %d la %d\n", i, mPointer[i]);
        printf("Dia chi cua o nho thu %d: %p, gia tri: %d\n", i, &mPointer[i], mPointer[i]);
    }

    return(1);
}
