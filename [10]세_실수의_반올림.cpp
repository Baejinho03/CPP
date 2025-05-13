#include <iostream>

using namespace std;

int main() {
	float a, b, c;

	cin >> a >> b >> c; // 입력

	cout << fixed; // 소수점 3자리 고정
	cout.precision(3);

	cout << a << endl; // 출력 
	cout << b << endl;
	cout << c;

	return 0;
}