/* �����. continue. ����� ����� �������� ������ �����. ��������� ����� - 0 */
/* 14.04.2020, ��������� �.�., ����� ���� */
/** ������ ������ */
#include <iostream>
using namespace std;
/** ����� ������ */
int main() {
    int sum = 0;
    int x;
    while (cin >> x && x != 0) {
        if (x % 2 != 0)
            continue; // �� ������ ������, �� ��� ������������
        /* if (x % 2 == 0) sum += x; */
        sum += x;
    }
    cout << sum << endl;

    return 0;
}
