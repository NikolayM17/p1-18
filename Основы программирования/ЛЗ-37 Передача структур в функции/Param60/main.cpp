/* Programming Taskbook. ����������� �������� �� ����������������
(c)  �. �. ������� (����� ����������� �����������), 1998�2020 */
// ��������� ���� ������ � ���������� � ��������
// http://ptaskbook.com/ru/tasks/param.php
/** Param60�. ��������� ��� TDate � ������� LeapYear (��. ������� Param59),
������� ������� DaysInMonth(D) ������ ���� � ���������� ���� TDate,
������� ���������� ���������� ���� ��� ������,
���������� � ���� D. ������� �������� ������� DaysInMonth ��� ���� ������ ���
(��������������, ��� ��� ���� �������� �����������). */
/* �������: ������� �.�., 25.05.2020 */
#include <iostream>
#include "tdate.h"

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        tdate date;
        cin >> date.year >> date.month >> date.day;
        cout << (date.leap_year() ? "yes" : "no") << endl;
        cout << (date.DaysInMonth(date.leap_year())) << endl;
    }
    return 0;
}
