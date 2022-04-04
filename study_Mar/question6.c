// 문제 6 (난이도 중)
// a+b+c=2000이고, a>b>c인 자연수 a,b,c의 개수는?

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

	printf("개수 : %d", num);

	return 0;
}