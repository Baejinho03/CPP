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

    for (int i = 0; i < 5; i++) { // ���ڿ����� 
        if (arr[i][2] == n or arr[i][3] == n) { // ����° �Ǵ� �׹�° �ڸ��� ���ڰ� n�� ���ٸ�
            cout << arr[i] << endl; // �� ���ڿ��� ���
            count += 1;
        }
    }

    cout << count; // ����� ���ڿ��� ���� ���

    return 0;
}