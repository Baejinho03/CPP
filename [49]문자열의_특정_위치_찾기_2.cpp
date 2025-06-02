#include <iostream>
using namespace std;

int main() {
    int count = 0;
    char n;
    string arr[5];

    arr[0] = "apple";
    arr[1] = "banana";
    arr[2] = "grape";
    arr[3] = "blueberry";
    arr[4] = "orange";

    cin >> n;

    for (int i = 0; i < 5; i++) { // 문자열들중 
        if (arr[i][2] == n or arr[i][3] == n) { // 세번째 또는 네번째 자리의 문자가 n과 같다면
            cout << arr[i] << endl; // 그 문자열을 출력
            count += 1;
        }
    }

    cout << count; // 출력한 문자열의 개수 출력

    return 0;
}