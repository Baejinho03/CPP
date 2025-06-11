#include <iostream>
using namespace std;


int main() {
	int n;

	cin >> n;

	for (int i = 1; i < n+1; i++) { // n개의 라인 생성
		for (int j = 0; j < 2*i-1; j++) { // 각 라인 당 2*i-1개의 '*' 출력
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}