#include <iostream>

using namespace std;

int main() {
	char a[10] = {};

	for (int i = 0; i < 10; i++) { // �Էµ� 10�ڸ� ���ڸ� a �迭�� ä��
		cin >> a[i];
	}

	for (int i = 9; i >= 0; i--) { // a �迭�� ���Ҹ� �Ųٷ� �����
		cout << a[i];
	}

	return 0;
}