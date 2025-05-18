#include <iostream>

using namespace std;

int main() {
	int N;

	cin >> N;

	for (int i = 1; i <= 5; i++) { // N의 입력값과 1~5의 곱한 값을 출력
		cout << N * i << " ";
	}

	return 0;
}