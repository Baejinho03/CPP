#include <iostream>

using namespace std;

int main() {

	int a = 1; // 변수 입력
	int b = 5;
	int c = 3;

	a = c; // c 값을 a 에 복사
	a = a + c; // a 에 a + c 넣기
	b = b - c; // b 에 b - c 넣기

	cout << a << "\n" << b << '\n' << c; // 변수 출력
	
	return 0;
}