/* �����. ������� ��������� for-for */
/* 14.04.2020, ��������� �.�., ����� ���� */
/** ������ ������ */
#include <iostream>
using namespace std;
/** ����� ������ */
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        // ���������� ����� �������� ������ ����������� ����������� */
        for (int j = 0; j < n; j++)
            cout << (i + 1) * (j + 1) << '\t';
        cout << endl;
    }
    return 0;
}
