/* Programming Taskbook. ����������� �������� �� ����������������
(c)  �. �. ������� (����� ����������� �����������), 1998�2020 */
// ��������� ���� ������ � ���������� � ��������
// http://ptaskbook.com/ru/tasks/param.php
/* ��������� � �������: ������ � ��������� */
/** Param2. ������� ������� MaxNum(A, N) ������ ����,
��������� ����� ������������� �������� ������������� ������� A ������� N.
� ������� ���� ������� ����� ������ ������������ ���������
�������� A, B, C ������� NA, NB, NC ��������������.*/
#include <iostream>
using namespace std;

double MaxNum(double *v, int n);
int main() {
    setlocale(LC_ALL, "Russian");
    for (int k = 0; k < 3; k++) {
        int n;
        double m;
        cout << "������ ������ " << k+1 << ":";
        cin >> n;
        double *v = new double[n];
        for (int i = 0; i < n; i++)
            cin >> v[i];
        m = MaxNum(v, n);

                cout << "������������:" << m << endl;
        }
        cout << endl;

	return 0;
}

double MaxNum(double *v, int n) {
    double t = v[0] ;
    for (int i = 1; i < n; i++)
        if (v[i]>t)
            t = v[i];

        return t;
    }

