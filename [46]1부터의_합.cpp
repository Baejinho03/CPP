#include <iostream>

using namespace std;

int main() {
	int n;
	int a = 0;

	cin >> n;

	for (int i = 1; i <= 100; i++) {
		a += i;

		if (a >= n) { // 1���� 100���� ������ ���� �Էµ� n���� ũ�ų� �������ٸ� ���������� ���� ���� ���
			cout << i;
			break;
		}
	}

	return 0;
}