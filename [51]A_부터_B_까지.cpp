#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    while (a <= b) { // a가 b보다 작거나 같을 동안 a를 계속해서 출력
        cout << a << " ";

        if (a % 2 == 0) // a가 짝수라면 3을 더함
            a += 3;
        else // a가 홀수라면 2를 곱함
            a *= 2;
    }

    return 0;
}