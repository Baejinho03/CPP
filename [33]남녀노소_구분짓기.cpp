#include <iostream>

using namespace std;

int main() {
	int sex, age;

	cin >> sex >> age;

	if (age >= 19) { // age�� 19 �̻��̸鼭
		if (sex == 0) // sex�� 0�̸� "MAN" ���
			cout << "MAN"; 
		else // sex�� 1�̸� "WOMAN" ���
			cout << "WOMAN"; 
	}
	else { // age�� 19�� �̸��̸鼭
		if (sex == 0) // sex�� 0�̸� "BOY" ���
			cout << "BOY";
		else // sex�� 1�̸� "GIRL" ���
			cout << "GIRL";
	}

	return 0;
}