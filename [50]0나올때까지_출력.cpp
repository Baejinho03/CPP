#include <iostream>
using namespace std;

int main() {

    int n;

    while (true) { // ���� �ݺ�
        cin >> n;

        if (n == 0) // �Է°��� 0�̶�� ���� Ż��
            break;

        cout << n << endl;
    }

    return 0;
}