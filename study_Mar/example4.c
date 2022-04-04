// 변수 선언 시 주의해야 할 점
#include <stdio.h>
int main() {
	int a, A;	// a와 A는 각기 다른 변수입니다.

	int lhi;	// (오류) 숫자가 앞에 위치할 수 없습니다.
	int hi123, h123i, h1234324;	// 숫자가 뒤에 위치하면 괜찮습니다.

	int 한글이좋아;	// (오류) 변수는 오직 알파벳, 숫자, 그리고 _로만으로 이루어져야 합니다.

	//int space bar;	// (오류) 변수 이름에는 띄워쓰기가 포함되어선 안됩니다.
	int space_bar;	// _가 있으므로 가능합니다.

	//int enum, long, double, int;	// (오류) 해당 이름들은 이미 c에서 쓰이고 있는 이름입니다.

	return 0;
}