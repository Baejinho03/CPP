#include <iostream>

using namespace std;

int main() {
	int y;

	cin >> y;

	if (y % 4 == 0) { // 4로 나누어 떨어지는 경우 중
		if (y % 100 == 0 and y % 400 != 0) // 100으로 나누어 떨어지되, 400으로 나누어 떨어지지 않으면 "false" 출력
			cout << "false";
		else
			cout << "true"; // 위의 조건 외에는 "true" 출력
	}
	else
		cout << "false"; // 4로 나누어 떨어지지 않는다면 "false" 출력

	return 0;
}