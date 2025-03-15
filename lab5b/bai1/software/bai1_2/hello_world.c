#include "system.h"
#include "stdio.h"


unsigned char[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};

int main(void)
{
    printf("Program started\n");
    char *mPointer = (char*) MEMORY_0_BASE;
    int i;
    unsigned char[] = {

    // Ghi du lieu vao bo nho (cac chu cai 'a' den 'p')
    printf("Bat dau qua trinh ghi du lieu:\n");
    for (i = 0; i < 16; i++)
    {
        mPointer[i] = 'a' + i;  // Ghi chu cai: 'a', 'b', 'c', ..., 'p'
        printf("Ghi: Dia chi 0x%08x, Gia tri '%c' (0x%02x)\n",
               (unsigned int)&mPointer[i], mPointer[i], (unsigned char)mPointer[i]);
    }


    // Doc du lieu tu bo nho
    printf("\nBat dau qua trinh doc du lieu:\n");
    for (i = 0; i < 16; i++)
    {
        printf("Doc: Dia chi 0x%08x, Gia tri '%c' (0x%02x)\n",
               (unsigned int)&mPointer[i], mPointer[i], (unsigned char)mPointer[i]);
    }

    return(1);
}
