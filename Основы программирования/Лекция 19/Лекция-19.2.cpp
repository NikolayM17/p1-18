/* �����. ������� ��������� for-while */
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
        int j = 0;
        while (j < n) {
            cout << (i + 1) * (j + 1) << '\t';
            j++;
        }
        cout << endl;
    }
    return 0;
}
