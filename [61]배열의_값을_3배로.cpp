#include <iostream>

using namespace std;

int main() {
	int arr[3][3];

	for (int i = 0; i < 3; i++) { // 3x3 배열 입력
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++) { // 각각의 값들을 3 곱함
		for (int j = 0; j < 3; j++) {
			arr[i][j] =  arr[i][j] * 3;
		}
	}

	for (int i = 0; i < 3; i++) { // 출력
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}