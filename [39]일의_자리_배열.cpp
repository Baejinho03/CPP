#include <iostream>

using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    int n[10] = {a, b};

    for (int i = 2; i < 10; i++) { // n �迭�� �ε����� 2 ~ 9 �� ���Ҹ� �Է�
        n[i] = n[i - 1] + n[i - 2]; // ���� �� ������ ���� �� �Է�
        
        if (n[i] > 9) { // �Էµ� ������ ���� 10 �̻��̸� 10�� ���� ���� �ڸ� ���ڸ� ������ ������ �Է�
            n[i] = n[i] - 10;
            cin >> n[i];
        }
        else
            cin >> n[i]; 
    }

    for (int i = 0; i < 10; i++) // n �迭�� �Էµ� ��� ���Ҹ� ���
        cout << n[i] << " ";

    return 0;
}