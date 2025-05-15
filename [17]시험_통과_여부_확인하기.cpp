#include <iostream>

using namespace std;

int main() {
	int score;

	cin >> score;

	if (score >= 80) { // 80점 이상일 시, "pass" 출력
		cout << "pass";
	}
	else {
		cout << 80 - score << " " << "more score"; // 그 외의 경우 80점이 되기 위해 필요한 추가 점수를 출력
	}

	return 0;
}