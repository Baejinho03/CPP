#include <iostream>

using namespace std;

int main() {
	int a_math, a_english, b_math, b_english;

	cin >> a_math >> a_english; // a�� ����, ���� ���� �Է�

	cin >> b_math >> b_english; // b�� ����, ���� ���� �Է�

	if (a_math > b_math && a_english > b_english) { // a�� b���� ����,���� �� ���� ��� ������ ���ٸ� 1 ���
		cout << "1";
	}
	else { // �׷��� �ʴٸ� 0 ���
		cout << "0";
	}

	return 0;
}