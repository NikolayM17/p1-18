/* ����������� ����������� if */
/* ������������ �� 3� ����� �����. 13.04.2020, ��������� �.�., ����� ���� */
/** ������ ������ */
#include <iostream>
using namespace std;
/** ����� ������ */
int main() {
    int a, b, c; /* ����������� � ������������ ��������� ����������, �� ����������������, "�����" */
    cin >> a >> b >> c;
    int max;
    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;
    cout << "max = " << max << endl;
    return 0;
}
