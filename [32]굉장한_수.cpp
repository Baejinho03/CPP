#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	if ((n % 2 == 1 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0)) // n�� Ȧ���̸鼭 3�� ����̰ų� ¦���̸鼭 5�� ����̸� "true" ���
		cout << "true";
	else // �׷��� ������ "false" ���
		cout << "false"; 

	return 0;
}