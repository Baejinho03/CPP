#include <iostream>
using namespace std;


int main() {
	int n;

	cin >> n;

	for (int i = 1; i < n+1; i++) { // n���� ���� ����
		for (int j = 0; j < 2*i-1; j++) { // �� ���� �� 2*i-1���� '*' ���
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}