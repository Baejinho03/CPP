#include <iostream>

using namespace std;

int main() {
	string a;
	cin >> a;

	a[1] = 'a'; // ���ڿ��� �ι�° �ڸ��� 'a'�� ����
	a[a.length() - 2] = 'a'; // ���ڿ��� �ڿ��� �ι�° �ڸ��� 'a'�� ����

	cout << a;

	return 0;
}