#include <iostream>

using namespace std;

int main() {
	int n;
	int a = 0;

	cin >> n;

	for (int i = 1; i <= 100; i++) {
		a += i;

		if (a >= n) { // 1부터 100까지 더해진 수가 입력된 n보다 크거나 같아진다면 마지막으로 더한 수를 출력
			cout << i;
			break;
		}
	}

	return 0;
}