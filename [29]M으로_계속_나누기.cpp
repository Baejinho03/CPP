#include <iostream>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	while (n != 0) { // n 값이 0이 되기 전까지 계속 n을 m으로 나눈 몫을 출력
		cout << n << " ";
		n = n / m;

		
	}

	return 0;
}