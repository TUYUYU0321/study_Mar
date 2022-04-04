// 변수 알아보기 [3]
#include <stdio.h>
int main() {
	float a = 3.141592f;			// 뒤에 f는 double형으로 인식하게 하기 위해 붙임
	double b = 3.141592;
	int c = 123;
	printf("a : %.2f \n", a);		// a,b를 실수형 변수로 선언하였으므로 %f를 사용
	printf("b : %5f \n", c);		// %f 사용 시, 뒤에 소수점 값을 표시해주어야함
	pritnf("c : %6.3f \n", b);		// .2는 무조건 소수점 이하 둘째 자리까지만 표시
	return 0;						// 5는 숫자의 자리수를 되도록 5자리로 맞추라는 뜻
}