#include "system.h"
#include "stdio.h"

int main(void)
{
    printf("Program started\n");
    short *mPointer = (short*) MEMORY_0_BASE;  // Thay char* thành short*
    int i;

    // Ghi du lieu vao bo nho (cac chu cai 'a' den 'p')
    printf("Bat dau qua trinh ghi du lieu:\n");
    for (i = 0; i < 16; i++)
    {
        mPointer[i] = 'a' + i;  // Ghi chu cai: 'a', 'b', 'c', ..., 'p'
        printf("Ghi: Dia chi 0x%08x, Gia tri '%c' (0x%04x)\n",
               (unsigned int)&mPointer[i], (char)mPointer[i], (unsigned short)mPointer[i]);
    }


    // Doc du lieu tu bo nho
    printf("\nBat dau qua trinh doc du lieu:\n");
    for (i = 0; i < 16; i++)
    {
        printf("Doc: Dia chi 0x%08x, Gia tri '%c' (0x%04x)\n",
               (unsigned int)&mPointer[i], (char)mPointer[i], (unsigned short)mPointer[i]);
    }

    return(1);
}
