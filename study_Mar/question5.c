// ���� 5 (���̵� ��)

#include <stdio.h>
int main() {

	int num;
	int multix_ = 1;

	printf("���ڸ� �Է����ּ��� : ");

	scanf_s("%d", &num);
	for (int i = 1;i < num + 1;i++) {
		multix_ = multix_ * i;
	}

	printf("1���� %d������ ����? %d", num, multix_);
	return 0;
}