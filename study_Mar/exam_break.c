// break 예제
#include <stdio.h>
int main() {
	int usranswer;

	printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");

	// for문의 조건식이 없으면 항상 참이다 (while과 같다)
	for (;;) {
		scanf("%d", &usranswer);
		if (usranswer == 3) {
			printf("맞추셨군요!\n");
			break;
		}
		else {
			printf("틀렸어요!\n");
		}
	}
	return 0;
}=