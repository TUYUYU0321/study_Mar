// ���� 7 (���̵� �߻�)
// ������ �ڿ��� N �� �Է� �޾� N �� ���μ� ���� �� ����� ����Ͽ���.

#include <stdio.h>
int main() {
	int num;
	int i;

	printf(" ���μ����� �ϰ� ���� ���� �Է����ּ��� \n");
	scanf_s("%d", &num);
	printf("%d�� �Է��ϼ̽��ϴ�.\n", num);
	printf("%d=", num);

	for (i = 2;i <= num;i++) {
		if (num % i == 0) {
			printf("%d", i);
			num = num / i;
			if (num % i == 0) {
				printf("*");
			}
			else if (num % i != 0) {
				if (num > i)	printf("*");
			}
			i = 1;
		}

	}
	printf("\n");
	return 0;
}