#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	if (a > b) { // a�� b���� Ŭ ��, a�� b�� ���� ���
		cout << a * b;
	}
	else { // �� ���� ��쿣, b�� a�� ���� ���� ���
		cout << b / a;
	}

	return 0;
}