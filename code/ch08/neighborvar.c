#include <stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 6;

	printf("������  ���尪  �ּҰ�  \n");
	printf("-----------------------------");

	printf("   c   %d   %p\n", c, &c);
	printf("   b   %d   %p\n", b, &c);
	printf("   a   %d   %p\n", a, &c);

	int* p = &c;
	printf("   c   %d   %p\n", *p, p);
	printf("   c   %d   %p\n", *(p + 3), p + 3);
	printf("   c   %d   %p\n", *(p + 6), p + 6);
	


	return 0;
}
