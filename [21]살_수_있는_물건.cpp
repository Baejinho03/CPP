#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	if (n >= 3000) { // n���� 3000 �̻��̶�� "book" ���
		cout << "book";
	}
	else if (n < 3000 && n >= 1000) { // n���� 1000 �̻�, 3000 �̸��̶�� "mask" ���
		cout << "mask";
	}
	else { // ���� �� ��� ���� ���(n���� 1000 �̸��� ���)��, "no" ���
		cout << "no";
	}

	return 0;
}