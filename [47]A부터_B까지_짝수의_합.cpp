#include <iostream>

using namespace std;

int main() {
	int a, b;
	int c = 0;

	cin >> a >> b;

	for (int i = a; i <= b; i++) { // a부터 b까지 수 중 짝수만 더하여 출력
		if (i % 2 == 1)
			continue; 

		c += i;
	}

	cout << c;

	return 0;
}