// ���� 4 (���̵� ��)

#include <stdio.h>
int main() {

	int total = 1000000;
	int num = 1;
	int k = 2;
	int sum = 1;

	while (num < total) {
		num = num + k;
		k = k + num;
		sum = sum + num;
	}
	printf("1000000 ������ �Ǻ���ġ ������ ¦�� �׵��� ����? %d", sum);
	return 0;
}