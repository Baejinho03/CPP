#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    while (a <= b) { // a�� b���� �۰ų� ���� ���� a�� ����ؼ� ���
        cout << a << " ";

        if (a % 2 == 0) // a�� ¦����� 3�� ����
            a += 3;
        else // a�� Ȧ����� 2�� ����
            a *= 2;
    }

    return 0;
}