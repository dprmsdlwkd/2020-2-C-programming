#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

	int input;

	do 
	{
		printf("���� �Ǵ� 0 (����)�� �Է�: ");
		scanf_s("%d", &input);

	}while (input != 0);

	puts("�����մϴ�.");

	return 0;
}