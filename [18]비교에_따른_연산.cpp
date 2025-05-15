#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	if (a > b) { // a가 b보다 클 땐, a와 b의 곱을 출력
		cout << a * b;
	}
	else { // 그 외의 경우엔, b를 a로 나눈 몫을 출력
		cout << b / a;
	}

	return 0;
}