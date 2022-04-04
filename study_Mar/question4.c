// 문제 4 (난이도 중)

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
	printf("1000000 이하의 피보나치 수열의 짝수 항들의 합은? %d", sum);
	return 0;
}