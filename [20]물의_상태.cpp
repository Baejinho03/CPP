#include <iostream>

using namespace std;

int main() {
	int tmp;

	cin >> tmp;

	if (tmp < 0) { // �Էµ� �µ� ���� 0 �̸��̶�� "ice" ���
		cout << "ice";
	}
	else if (tmp >= 100) { // �Էµ� �µ� ���� 100 �̻��̶�� "vapor" ���
		cout << "vapor";
	}
	else {
		cout << "water"; // ���� �� ��츦 ������ ��쿣, "water" ���
	}

	return 0;
}