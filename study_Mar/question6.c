// ���� 6 (���̵� ��)
// a+b+c=2000�̰�, a>b>c�� �ڿ��� a,b,c�� ������?

#include <stdio.h>
int main() {

	int a, b, c;
	int num = 0;
	int sum = 2000;

	for (c = 1; c < sum / 3; c++) {
		for (b = 2;b < sum / 2; b++) {
			for (a = 3; a < sum; a++) {
				if ((a + b + c == sum) && (a > b > c)) {
					num = num + 1;
				}
			}
		}
	}

	printf("���� : %d", num);

	return 0;
}