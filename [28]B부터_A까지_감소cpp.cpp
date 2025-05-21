#include <iostream>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	for (int i = B; i >= A; i--) { // B가 A보다 크거나 같을 동안 B를 1씩 감소하며 출력
		cout << i << " ";
	}

	return 0;
}
