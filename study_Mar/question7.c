// 문제 7 (난이도 중상)
// 임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라.

#include <stdio.h>
int main() {
	int num;
	int i;

	printf(" 소인수분해 하고 싶은 수를 입력해주세요 \n");
	scanf_s("%d", &num);
	printf("%d를 입력하셨습니다.\n", num);
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