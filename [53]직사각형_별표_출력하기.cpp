#include <iostream>
using namespace std;


int main() {
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) { // n���� �� ����
		for (int j = 0; j < m; j++) { // �� �ٴ� m���� "*" ����
			cout << "*" << " ";
		}
		cout << endl;
	}

	return 0;
}