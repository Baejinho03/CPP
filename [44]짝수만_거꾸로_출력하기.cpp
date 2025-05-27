#include <iostream>

using namespace std;

int main() {
	int n;
	int arr[100];

	cin >> n;

	for (int i = 0; i < n; i++) { 
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--) { // 배열에 입력된 수 중, 끝에서 부터 앞까지 거꾸로 짝수만 출력
		if (arr[i] % 2 == 0)
			cout << arr[i] << " ";
	}
	
	return 0;
}