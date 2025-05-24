#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    int n[10] = {a, b};

    for (int i = 2; i < 10; i++) { // n 배열의 인덱스가 2 ~ 9 인 원소를 입력
        n[i] = n[i - 1] + n[i - 2]; // 직전 두 원소의 합의 값 입력
        
        if (n[i] > 9) { // 입력된 원소의 값이 10 이상이면 10을 빼서 일의 자리 숫자만 원소의 값으로 입력
            n[i] = n[i] - 10;
            cin >> n[i];
        }
        else
            cin >> n[i]; 
    }

    for (int i = 0; i < 10; i++) // n 배열에 입력된 모든 원소를 출력
        cout << n[i] << " ";

    return 0;
}