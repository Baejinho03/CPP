#include <iostream>

using namespace std;

int main() {
	string a;
	cin >> a;

	a[1] = 'a'; // 문자열의 두번째 자리를 'a'로 변경
	a[a.length() - 2] = 'a'; // 문자열의 뒤에서 두번째 자리를 'a'로 변경

	cout << a;

	return 0;
}