#include "system.h"
#include "stdio.h"

int main(void)
{
    unsigned char data[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
    int num_elements = 6;
    int i;

    printf("Program started\n");
    int *mPointer = (int*) MEMORY_0_BASE;

    // Ghi du lieu vao bo nho (lay ky tu cach 4 byte: chi so 0, 3, 6, 9, 12, 15)
    printf("Bat dau qua trinh ghi du lieu:\n");
    for (i = 0; i < num_elements; i++)
    {
        int index = i * 3;
        mPointer[i] = data[index];
        printf("Ghi: Dia chi 0x%08x, Gia tri '%c' (0x%08x)\n",
               (unsigned int)&mPointer[i], (char)mPointer[i], (unsigned int)mPointer[i]);
    }

    // Doc du lieu tu bo nho
    printf("\nBat dau qua trinh doc du lieu:\n");
    for (i = 0; i < num_elements; i++)
    {
        printf("Doc: Dia chi 0x%08x, Gia tri '%c' (0x%08x)\n",
               (unsigned int)&mPointer[i], (char)mPointer[i], (unsigned int)mPointer[i]);
    }

    return(1);
}
