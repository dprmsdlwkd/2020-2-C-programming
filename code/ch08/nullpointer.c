#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int* ptr1, * ptr2, data = 10;
	ptr1 = NULL;

	printf("%p\n", ptr1);
	printf("%d\n", data);

	return 0;
}
