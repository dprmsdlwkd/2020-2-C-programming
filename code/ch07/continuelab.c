#include <stdio.h>

int main(void)
{
	int input;

	const int MAX = 15;

	printf("1���� %d���� ���� �߿��� 5�� ����� �������� �ʴ� ��\n");
	for (int i = 1; i <= MAX; i++) {
		if (i % 5) {
			continue;
		}
		printf("%3d", i);
	}
	puts("");


	return 0;
}
