#include <iostream>

using namespace std;

int main() {
	int score;

	cin >> score;

	if (score >= 80) { // 80�� �̻��� ��, "pass" ���
		cout << "pass";
	}
	else {
		cout << 80 - score << " " << "more score"; // �� ���� ��� 80���� �Ǳ� ���� �ʿ��� �߰� ������ ���
	}

	return 0;
}