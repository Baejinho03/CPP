#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n] = {};

	for (int i = 0; i < n; i++) { // a 배열에 n개의 원소 입력
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) { // a 배열의 각 원소의 제곱한 값을 출력
		cout << a[i] * a[i] << " ";
	}

	return 0;
}