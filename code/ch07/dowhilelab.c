#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

	int input = 0, result = 0, digit = 0;
	int devider = 100;

	printf("���� ����[100~999] �Է� : ");
	scanf_s("%d", &input);
	result = input;

	do {
		digit = result / devider;
		result %= devider;
		printf("%3d���� ���: %d\n", devider, digit);
		devider /= 10;
	} while (devider >= 1);

	
	return 0;
}