#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int input[20] = { 0 };

	printf("�迭�� ������ ������ ���� �� �Է��Ͻÿ�.");
	printf(" 0�� �Է��ϸ� �Է��� �����մϴ�.\n");
	int i = 0;

	do {
		scanf_s("%d", &input[i]);
	} while (input[i++] != 0);

	while (input[i] != 0) {
		printf("%d", input[i++]);
	}

	return 0;
}
