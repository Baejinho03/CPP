#include <iostream>

using namespace std;


int main() {
	int n;
	cin >> n;
	int a = 1;

	for (int i = 1; i <= n; i++) { // n개의 라인생성
		for (int j = 1; j <= i; j++) { // 현재 i 값에 따른 라인 당 들어갈 숫자의 갯수
			cout << a << " "; // a를 출력한 뒤 a에 1를 더함
			a += 1;
		}
		cout << endl;
		
	}
	return 0;
}