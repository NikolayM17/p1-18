/* �����. ������� ��������� do_while - while */
/* 14.04.2020, ��������� �.�., ����� ���� */
/** ������ ������ */
#include <iostream>
using namespace std;
/** ����� ������ */
int main() {
    int n;
    cin >> n;
    int i = 0;
    do {
        // ���������� ����� �������� � �����
        int j = 0;
        while (j < n) {
            cout << (i + 1) * (j + 1) << '\t';
            j++;
        }
        cout << endl;
        i++;
    } while (i < n);
    return 0;
}
