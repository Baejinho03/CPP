#include <iostream>

using namespace std;

int main() {
	int a_math, a_english, b_math, b_english;

	cin >> a_math >> a_english; // a의 수학, 영어 점수 입력

	cin >> b_math >> b_english; // b의 수학, 영어 점수 입력

	if (a_math > b_math && a_english > b_english) { // a가 b보다 수학,영어 두 과목 모두 점수가 높다면 1 출력
		cout << "1";
	}
	else { // 그렇지 않다면 0 출력
		cout << "0";
	}

	return 0;
}