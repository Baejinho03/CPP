#include <iostream>

using namespace std;

int main() {
	int n, a, b;

	cin >> n;

	for (int i = 0; i < n; i++) { // n번 반복 
		int sum = 0;
		cin >> a >> b;

		for (int i = a; i <= b; i++) { // a에서 b까지의 짝수의 합을 출력
			if (i % 2 == 0) {
				sum += i;
			}
		}

		cout << sum << endl;
	}
	return 0;
}