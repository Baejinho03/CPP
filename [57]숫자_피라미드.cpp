#include <iostream>
using namespace std;


int main() {
	int n;

	cin >> n;

	for (int i = 1; i < n + 1; i++) { // ��µǴ� �� 1 ~ n
		for (int j = 0; j < i; j++) { // i�� ���� ��µ�
			cout << i << ' ';
		}
		cout << endl;
	}

	return 0;
}