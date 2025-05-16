#include <iostream>

using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	if (a < b) { // a가 b보다 작을 시, "1" 출력 그렇지 않다면 "0" 출력
		cout << "1" << " ";
	}
	else {
		cout << "0" << " ";
	}

	if (a == b) { // a가 b와 같을 시, "1" 출력 그렇지 않다면 "0" 출력
		cout << "1";
	}
	else {
		cout << "0";
	}

	return 0;
}