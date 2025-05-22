#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	if ((n % 2 == 1 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0)) // n이 홀수이면서 3의 배수이거나 짝수이면서 5의 배수이면 "true" 출력
		cout << "true";
	else // 그렇지 않으면 "false" 출력
		cout << "false"; 

	return 0;
}