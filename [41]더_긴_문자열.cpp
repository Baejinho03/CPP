#include <iostream>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	if (a.length() > b.length()) // a 문자열이 b 문자열보다 길이가 길다면 a 문자열과 a 문자열의 길이 출력
		cout << a << " " << a.length();

	else if (a.length() < b.length()) // b 문자열이 a 문자열보다 길이가 길다면 b 문자열과 b 문자열의 길이 출력
		cout << b << " " << b.length();

	else
		cout << "same"; // 그 외의 경우는 "same" 출력

	return 0;
}