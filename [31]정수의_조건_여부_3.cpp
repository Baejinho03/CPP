#include <iostream>

using namespace std;

int main() {
	int a;

	cin >> a;

	if (a % 13 == 0 || a % 19 == 0) // a�� 13�� ����̰ų� 19�� ����� ��� "True" ���
		cout << "True";
	else // �׷��� ���� ��� "False" ���
		cout << "False";

	return 0;
}