#include <iostream>

using namespace std;

int main() {
	int n;
	int m = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) { // 1이상 n이하의 수 중 2,3,5로 나누어지지 않는 수의 개수를 출력함
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) // 2, 3 또는 5로 나누어 지는 수는 건너뜀
			continue;

		m += 1;
	}
	cout << m;
}