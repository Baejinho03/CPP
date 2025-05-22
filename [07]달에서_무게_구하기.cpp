#include <iostream>

using namespace std;

int main() {
	int a = 13;
	float b = 0.165;

	cout << fixed; // 소수점 아래자리 고정
	cout.precision(6); // 소수점 아래 6번째 자리까지만 출력

	cout << a << " " << "*" << " " << b << " " << "=" << " " << a * b;

	return 0;
}
