#include <iostream>

using namespace std;

int main() {
	int score;

	cin >> score;

	if (score >= 90) { // score 값이 90점 이상일 시, 'A' 출력
		cout << "A";
	}
	else if (score >= 80 && score < 90) { // score 값이 80점 이상, 90점 미만이면 'B' 출력
		cout << "B";
	}
	else if (score >= 70 && score < 80) { // score 값이 70점 이상, 80점 미만이면 'C' 출력
		cout << "C";
	}
	else if (score >= 60 && score < 70) { // score 값이 60점 이상, 70점 미만이면 'D' 출력
		cout << "D";
	}
	else { // 위의 경우를 제외한 경우(60점 미만인 경우) 'F' 출력
		cout << "F";
	}

	return 0;
}