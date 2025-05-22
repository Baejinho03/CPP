#include <iostream>

using namespace std;

int main() {
	int sex, age;

	cin >> sex >> age;

	if (age >= 19) { // age가 19 이상이면서
		if (sex == 0) // sex가 0이면 "MAN" 출력
			cout << "MAN"; 
		else // sex가 1이면 "WOMAN" 출력
			cout << "WOMAN"; 
	}
	else { // age가 19세 미만이면서
		if (sex == 0) // sex가 0이면 "BOY" 출력
			cout << "BOY";
		else // sex가 1이면 "GIRL" 출력
			cout << "GIRL";
	}

	return 0;
}