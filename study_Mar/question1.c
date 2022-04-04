// 문제 1 (난이도 중)

#include <stdio.h>
int main() {
	int num;

	printf("N 줄인 삼각형을 출력합니다. N 값을 입력해주세요 ");
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