#include <iostream>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	while (n != 0) { // n ���� 0�� �Ǳ� ������ ��� n�� m���� ���� ���� ���
		cout << n << " ";
		n = n / m;

		
	}

	return 0;
}