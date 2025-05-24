#include <iostream>

using namespace std;

int main() {
	char a[10] = {};

	for (int i = 0; i < 10; i++) { // 입력된 10자리 문자를 a 배열에 채움
		cin >> a[i];
	}

	for (int i = 9; i >= 0; i--) { // a 배열의 원소를 거꾸로 출력함
		cout << a[i];
	}

	return 0;
}