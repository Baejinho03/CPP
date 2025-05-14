#include <iostream>

using namespace std;

int main() {
	int a, b;
	
	cin >> a >> b; // 입력

	cout << fixed; // 소수점 아래 첫째 자리 까지 고정
	cout.precision(1);
	
	cout << a + b << " " << (float) (a + b) / 2; // 입력받은 a,b 값의 합과 평균 출력
	
	return 0;
}