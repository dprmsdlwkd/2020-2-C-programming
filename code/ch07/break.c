#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

	int input;
	while (1) {
		printf("����[����, 0(����), ���]�� �Է� �� [Enter] : ");
		scanf_s("%d", &input);
		if ((input == 0)) {
			break;
		}
	}
	puts("�����մϴ�.");


	return 0;
}
