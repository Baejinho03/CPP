#include <iostream>

using namespace std;

int main() {
	int A, N;

	cin >> A >> N;

	for (int i = 0; i < N; i++) { // A에 N을 더하는 과정을 N번 반복함
		A = A + N; 
		cout << A << endl;
	}
	
	return 0;
}