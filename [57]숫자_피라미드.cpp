#include <iostream>
using namespace std;


int main() {
	int n;

	cin >> n;

	for (int i = 1; i < n + 1; i++) { // 출력되는 수 1 ~ n
		for (int j = 0; j < i; j++) { // i번 동안 출력됨
			cout << i << ' ';
		}
		cout << endl;
	}

	return 0;
}