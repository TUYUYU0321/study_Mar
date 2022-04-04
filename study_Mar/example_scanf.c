/*섭씨 온도를 화씨로 바꾸기*/

#include <stdio.h>
int main() {
	double celsius = 0;		//섭씨 온도

	printf("섭씨 온도를 화씨 온도로 바꾸는 프로그램입니다\n");
	printf("섭씨 온도를 입력해주세요 : ");
	scanf("%lf", &celsius);		// 섭씨 온도를 입력 받는다.

	printf("섭씨 %.2f 도는 화씨로 %.2f 도 입니다\n", celsius, 9 * celsius / 5 + 32);
}
