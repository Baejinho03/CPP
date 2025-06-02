#include <iostream>
using namespace std;

int main() {

    int n;

    while (true) { // 무한 반복
        cin >> n;

        if (n == 0) // 입력값이 0이라면 루프 탈출
            break;

        cout << n << endl;
    }

    return 0;
}
