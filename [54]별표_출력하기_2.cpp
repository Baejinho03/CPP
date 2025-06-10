#include <iostream>
using namespace std;


int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) { // n개의 라인 생성
		for (int j = 0; j < n-i; j++) { // 각 라인 당 n-i개의 * 생성
			cout << "*" << " ";
		}
		cout << endl;
	}

	return 0;
}