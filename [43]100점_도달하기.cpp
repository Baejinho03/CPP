#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = n; i <= 100; i++) { // �Էµ� ������ 100�������� ����� ���

		if (n >= 90)
			cout << "A" << " "; // �Էµ� ���� 90 �̻��� ��, 'A' ���
		else if (n >= 80 && n < 90) 
			cout << "B" << " ";  // 80 �̻�, 90 �̸��� ��, 'B' ���
		else if (n >= 70 && n < 80)
			cout << "C" << " "; // 70 �̻�, 80 �̸��� ��, 'C' ���
		else if (n >= 60 && n < 70)
			cout << "D" << " "; // 60 �̻�, 70 �̸��� ��, 'D' ���
		else
			cout << "F" << " "; // �� ���� ���� 'F' ���

		n += 1; 
	}

	return 0;
}