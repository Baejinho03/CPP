#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = n; i <= 100; i++) { // 입력된 값부터 100점까지의 등급을 출력

		if (n >= 90)
			cout << "A" << " "; // 입력된 값이 90 이상일 시, 'A' 출력
		else if (n >= 80 && n < 90) 
			cout << "B" << " ";  // 80 이상, 90 미만일 시, 'B' 출력
		else if (n >= 70 && n < 80)
			cout << "C" << " "; // 70 이상, 80 미만일 시, 'C' 출력
		else if (n >= 60 && n < 70)
			cout << "D" << " "; // 60 이상, 70 미만일 시, 'D' 출력
		else
			cout << "F" << " "; // 그 외의 경우는 'F' 출력

		n += 1; 
	}

	return 0;
}