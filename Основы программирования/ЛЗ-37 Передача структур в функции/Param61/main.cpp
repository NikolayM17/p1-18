/* Programming Taskbook. ����������� �������� �� ����������������
(c)  �. �. ������� (����� ����������� �����������), 1998�2020 */
// ��������� ���� ������ � ���������� � ��������
// http://ptaskbook.com/ru/tasks/param.php
/** Param61�. ��������� ��� TDate � ������� DaysInMonth (��. ������� Param59 � Param60),
������� ������� CheckDate(D) ������ ���� � ���������� ���� TDate,
������� ��������� ������������ ����, ��������� � ��������� D.
���� ���� D �������� ����������, �� ������� ���������� 0;
���� � ���� ������ �������� ����� ������, �� ������� ���������� 1;
���� � ���� ������ �������� ���� ��� ����������� ������, �� ������������ 2.
������� �������� ������� CheckDate ��� ���� ������ ���. */
/* �������: ������� �.�., 25.05.2020 */
#include <iostream>
#include "tdate.h"

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        tdate date;
        int h;

        cin >> date.year >> date.month >> date.day;
        cout << (date.leap_year() ? "yes" : "no") << endl;
        h = (date.CheckDate(date.DaysInMonth(date.leap_year())));
        cout << h << endl;
        if (h == 0)
        cout << (date.DaysInMonth(date.leap_year())) << endl;
        else
            cout << "Date is Wrong" << endl;
    }
    return 0;
}
