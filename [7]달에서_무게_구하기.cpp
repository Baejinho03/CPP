#include <iostream>

using namespace std;

int main() {
	int a = 13;
	float b = 0.165;

	cout << fixed; // �Ҽ��� �Ʒ��ڸ� ����
	cout.precision(6); // �Ҽ��� �Ʒ� 6��° �ڸ������� ���

	cout << a << " " << "*" << " " << b << " " << "=" << " " << a * b;

	return 0;
}