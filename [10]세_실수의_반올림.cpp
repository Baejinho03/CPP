#include <iostream>

using namespace std;

int main() {
	float a, b, c;

	cin >> a >> b >> c; // �Է�

	cout << fixed; // �Ҽ��� 3�ڸ� ����
	cout.precision(3);

	cout << a << endl; // ��� 
	cout << b << endl;
	cout << c;

	return 0;
}