#include <iostream>
using namespace std;


int main() {
	int n;

	cin >> n;

	for (int i = 1; i < n+1; i++) { // 곱해지는 수 i 
		for (int j = 1; j < n+1; j++) { // 곱하는 수 j
			if (j == n) // j가 3일 시, 뒤에 ','를 출력하지 않음
				cout << i << ' ' << '*' << ' ' << j << ' ' << '=' << ' ' << i * j;
			else // 그 외에는 ','를 출력
				cout << i << ' ' << '*' << ' ' << j << ' ' << '=' << ' ' << i * j << ',' << ' ';
		}
		cout << endl;
	}

	return 0;
}