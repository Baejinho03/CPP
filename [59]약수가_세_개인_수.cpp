#include <iostream>

using namespace std;

int main() {
	int st, ed;
	int n = 0;

	cin >> st >> ed;

	for (int i = st; i <= ed; i++) { 
		int sum = 0;

		for (int j = 1; j <= i; j++) { // 현재 i값의 약수의 갯수를 구함
			if (i % j == 0)
				sum += 1;
		}
		if (sum == 3) // 약수의 갯수가 3인 수의 갯수를 구함
			n += 1;
	}

	cout << n;

	return 0;
}