#include <iostream>

using namespace std;

int main() {
	int a, b;
	
	cin >> a >> b; // �Է�

	cout << fixed; // �Ҽ��� �Ʒ� ù° �ڸ� ���� ����
	cout.precision(1);
	
	cout << a + b << " " << (float) (a + b) / 2; // �Է¹��� a,b ���� �հ� ��� ���
	
	return 0;
}