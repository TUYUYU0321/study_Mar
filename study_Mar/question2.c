// ���� 2 (���̵� �߻�)

#include <stdio.h>
int main() {
	int num;
	int j;

	printf("N ���� ���ﰢ���� ����մϴ�. N ���� �Է����ּ��� ");
	scanf_s("%d", &num);

	for (int i = 0;i < num;i++) {
		for (j = 0; j < i;j++) {
			printf(" ");
		}
		for (int k = 1;k < 2 * (num - i); k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}