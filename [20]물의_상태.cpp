#include <iostream>

using namespace std;

int main() {
	int tmp;

	cin >> tmp;

	if (tmp < 0) { // 입력된 온도 값이 0 미만이라면 "ice" 출력
		cout << "ice";
	}
	else if (tmp >= 100) { // 입력된 온도 값이 100 이상이라면 "vapor" 출력
		cout << "vapor";
	}
	else {
		cout << "water"; // 위의 두 경우를 제외한 경우엔, "water" 출력
	}

	return 0;
}