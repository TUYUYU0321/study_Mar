// ���� 1 (���̵� ��)

#include <stdio.h>
int main() {
	int num;

	printf("N ���� �ﰢ���� ����մϴ�. N ���� �Է����ּ��� ");
	scanf_s("%d", &num);

	for (int i = 1;i < num + 1;i++) {
		for (int j = 0; j < num - i;j++) {
			printf(" ");
		}
		for (int k = 0;k < 2 * i - 1;k++) {
			printf("*");
		}
		printf("\n");
	}
}