#include <iostream>

using namespace std;

int main() {
	int score;

	cin >> score;

	if (score >= 90) { // score ���� 90�� �̻��� ��, 'A' ���
		cout << "A";
	}
	else if (score >= 80 && score < 90) { // score ���� 80�� �̻�, 90�� �̸��̸� 'B' ���
		cout << "B";
	}
	else if (score >= 70 && score < 80) { // score ���� 70�� �̻�, 80�� �̸��̸� 'C' ���
		cout << "C";
	}
	else if (score >= 60 && score < 70) { // score ���� 60�� �̻�, 70�� �̸��̸� 'D' ���
		cout << "D";
	}
	else { // ���� ��츦 ������ ���(60�� �̸��� ���) 'F' ���
		cout << "F";
	}

	return 0;
}