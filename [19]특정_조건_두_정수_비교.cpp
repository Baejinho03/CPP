#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	if (a < b) { // a�� b���� ���� ��, "1" ��� �׷��� �ʴٸ� "0" ���
		cout << "1" << " ";
	}
	else {
		cout << "0" << " ";
	}

	if (a == b) { // a�� b�� ���� ��, "1" ��� �׷��� �ʴٸ� "0" ���
		cout << "1";
	}
	else {
		cout << "0";
	}

	return 0;
}