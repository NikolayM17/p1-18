/* �����. break. ����� ����� �������� ����� �����. ��������� ����� - 0 */
/* 14.04.2020, ��������� �.�., ����� ���� */
/** ������ ������ */
#include <iostream>
using namespace std;
/** ����� ������ */
int main() {
    int sum = 0;
    int x;
    while (cin >> x) {
        if (x == 0)
            break; // �� ������ ������, �� ��� ������������
        sum += x;
    }
    cout << sum << endl;

    return 0;
}
