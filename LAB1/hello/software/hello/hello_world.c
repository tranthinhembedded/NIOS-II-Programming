
#include <stdio.h>

//int main()
//{
//  printf("Hello from Nios II!\n");
//
//  return 0;
//}

int main()
{
	volatile int a = 0;
	volatile int b = 2;
	volatile int c = 5;

	a = b + c;
	b = a - c;

	while(1);

	return 0;
}
