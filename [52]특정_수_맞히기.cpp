#include <iostream>
using namespace std;


int main() {
	while (true) { 
		int num;

		cin >> num;

		if (num < 25) // num이 25보다 작다면 "Higher" 출력
			cout << "Higher" << endl;

		else if (num == 25) { // num이 25라면 "Good" 출력 후 반복문 종료
			cout << "Good" << endl;
			break;
		}

		else // num이 25보다 크다면 "Lower" 출력 
			cout << "Lower" << endl;
	}

	return 0;
}