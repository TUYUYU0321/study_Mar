// scanf 총 정리
#include <stdio.h>
int main() {
	char ch;
	short sh;
	int i;
	long lo;
	float fl;
	double du;

	printf("char 형 변수 입력 : ");
	scanf_s("%c", &ch);
	printf("short 형 변수 입력 : ");
	scanf_s("%hd", &sh);
	printf("int 형 변수 입력 : ");
	scanf_s("%d", &i);
	printf("long 형 변수 입력 : ");
	scanf_s("%ld", &lo);
	printf("float 형 변수 입력 : ");
	scanf_s("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf_s("%lf", &du);

	printf("char : %c, short : %d, int : %d, ", ch, sh, i);
	printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
	return 0;
}