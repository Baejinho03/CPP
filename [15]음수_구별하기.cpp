#include <iostream>

using namespace std;

int main() {
	int a;

	cin >> a;

	if (a < 0) { // a�� ������ ��, a�� ���� "minus" ���
		cout << a << endl << "minus"; 
	}

	else { // a�� ����� ��, a�� ���� ���
		cout << a;
	}

	return 0;
}