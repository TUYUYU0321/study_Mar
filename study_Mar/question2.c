// 문제 2 (난이도 중상)

#include <stdio.h>
int main() {
	int num;
	int j;

	printf("N 줄인 역삼각형을 출력합니다. N 값을 입력해주세요 ");
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