#include <iostream>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	if (a.length() > b.length()) // a ���ڿ��� b ���ڿ����� ���̰� ��ٸ� a ���ڿ��� a ���ڿ��� ���� ���
		cout << a << " " << a.length();

	else if (a.length() < b.length()) // b ���ڿ��� a ���ڿ����� ���̰� ��ٸ� b ���ڿ��� b ���ڿ��� ���� ���
		cout << b << " " << b.length();

	else
		cout << "same"; // �� ���� ���� "same" ���

	return 0;
}