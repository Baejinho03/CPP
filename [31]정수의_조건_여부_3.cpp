#include <iostream>

using namespace std;

int main() {
	int a;

	cin >> a;

	if (a % 13 == 0 || a % 19 == 0) // a가 13의 배수이거나 19의 배수일 경우 "True" 출력
		cout << "True";
	else // 그렇지 않을 경우 "False" 출력
		cout << "False";

	return 0;
}