#include <iostream>

using namespace std;

int main() {
	int arr[10];
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < 10; i++) // 10개의 수 입력
		cin >> arr[i];

	for (int i = 0; i < 10; i++) { // 3의 배수인 수와 5의 배수인 수의 개수를 구함
		if (arr[i] % 3 == 0)
			cnt1 += 1;

		if (arr[i] % 5 == 0)
			cnt2 += 1;	
	}

	cout << cnt1 << " " << cnt2; 

	return 0;
}