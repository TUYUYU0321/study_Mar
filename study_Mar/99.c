// 구구단 만들기

#include <stdio.h>
int main() {

	int multi;

	for (int i = 1;i < 10;i++) {
		for (int j = 1;j < 10;j++) {
			multi = i*j;
			printf("%d * %d = %d\n", i, j, multi);
		}
	}
	return 0;
}