#include <iostream>
using namespace std;


int main() {
	while (true) { 
		int num;

		cin >> num;

		if (num < 25) // num�� 25���� �۴ٸ� "Higher" ���
			cout << "Higher" << endl;

		else if (num == 25) { // num�� 25��� "Good" ��� �� �ݺ��� ����
			cout << "Good" << endl;
			break;
		}

		else // num�� 25���� ũ�ٸ� "Lower" ��� 
			cout << "Lower" << endl;
	}

	return 0;
}