#include <iostream>

using namespace std;

int main() {
	int y;

	cin >> y;

	if (y % 4 == 0) { // 4�� ������ �������� ��� ��
		if (y % 100 == 0 and y % 400 != 0) // 100���� ������ ��������, 400���� ������ �������� ������ "false" ���
			cout << "false";
		else
			cout << "true"; // ���� ���� �ܿ��� "true" ���
	}
	else
		cout << "false"; // 4�� ������ �������� �ʴ´ٸ� "false" ���

	return 0;
}