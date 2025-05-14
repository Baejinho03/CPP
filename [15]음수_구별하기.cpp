#include <iostream>

using namespace std;

int main() {
	int a;

	cin >> a;

	if (a < 0) { // a가 음수일 때, a의 값과 "minus" 출력
		cout << a << endl << "minus"; 
	}

	else { // a가 양수일 때, a의 값만 출력
		cout << a;
	}

	return 0;
}