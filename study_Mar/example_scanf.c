/*���� �µ��� ȭ���� �ٲٱ�*/

#include <stdio.h>
int main() {
	double celsius = 0;		//���� �µ�

	printf("���� �µ��� ȭ�� �µ��� �ٲٴ� ���α׷��Դϴ�\n");
	printf("���� �µ��� �Է����ּ��� : ");
	scanf("%lf", &celsius);		// ���� �µ��� �Է� �޴´�.

	printf("���� %.2f ���� ȭ���� %.2f �� �Դϴ�\n", celsius, 9 * celsius / 5 + 32);
}
