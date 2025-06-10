#include <iostream>
using namespace std;


int main() {
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) { // n개의 줄 생성
		for (int j = 0; j < m; j++) { // 한 줄당 m개의 "*" 생성
			cout << "*" << " ";
		}
		cout << endl;
	}

	return 0;
}