#include <iostream>
using namespace std;


int main() {
	int n;

	cin >> n;

	for (int i = 1; i < n+1; i++) { // �������� �� i 
		for (int j = 1; j < n+1; j++) { // ���ϴ� �� j
			if (j == n) // j�� 3�� ��, �ڿ� ','�� ������� ����
				cout << i << ' ' << '*' << ' ' << j << ' ' << '=' << ' ' << i * j;
			else // �� �ܿ��� ','�� ���
				cout << i << ' ' << '*' << ' ' << j << ' ' << '=' << ' ' << i * j << ',' << ' ';
		}
		cout << endl;
	}

	return 0;
}