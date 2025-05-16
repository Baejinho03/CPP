#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	if (n >= 3000) { // n값이 3000 이상이라면 "book" 출력
		cout << "book";
	}
	else if (n < 3000 && n >= 1000) { // n값이 1000 이상, 3000 미만이라면 "mask" 출력
		cout << "mask";
	}
	else { // 위의 두 경우 외의 경우(n값이 1000 미만인 경우)엔, "no" 출력
		cout << "no";
	}

	return 0;
}