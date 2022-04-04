// 문제 5 (난이도 하)

#include <stdio.h>
int main() {

	int num;
	int multix_ = 1;

	printf("숫자를 입력해주세요 : ");

	scanf_s("%d", &num);
	for (int i = 1;i < num + 1;i++) {
		multix_ = multix_ * i;
	}

	printf("1부터 %d까지의 곱은? %d", num, multix_);
	return 0;
}