#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int a = 0 * 11223344;
	int* pa = &a;
	int* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);
	printf("%p\n", pa);
	printf("%p\n", pc+1);

	return 0;
}