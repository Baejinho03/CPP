#include <iostream>

using namespace std;

int main() {
	int n;
	int m = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) { // 1�̻� n������ �� �� 2,3,5�� ���������� �ʴ� ���� ������ �����
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) // 2, 3 �Ǵ� 5�� ������ ���� ���� �ǳʶ�
			continue;

		m += 1;
	}
	cout << m;
}