// 문제 3 (난이도 하)
#include <stdio.h>
int main() {

	int sum = 0;

	for (int i = 1;i < 1001;i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum = sum + i;
		}
	}

	printf("1000 이하의 3 또는 5의 배수인 자연수들의 합은? %d", sum);
	return 0;
}