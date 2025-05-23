#include <iostream>

using namespace std;

int main() { 
	int a, b, c;

	cin >> a >> b >> c;

	if (a > b) { // b < a < c 
		if (a < c)
			cout << a;
	}

	else if (a > c) { // c < a < b
		if (a < b)
			cout << a;
	}

	else if (b > a) { // a < b < c
		if (b < c)
			cout << b;
	}

	else if (b > c) { // c < b < a
		if (b < a)
			cout << b;
	}

	else if (c > a) { // a < c < b
		if (c < b)
			cout << c;
	}

	else { // b < c < a
		if (c < a)
			cout << c;
	}

	return 0;
}