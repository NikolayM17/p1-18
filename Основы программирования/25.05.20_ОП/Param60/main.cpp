#include <iostream>
#include "tdate.h"
#include <cmath>
/**
��������� ��� TDate � ������� LeapYear (��. ������� Param59), ������� ������� DaysInMonth(D) ������ ���� � ���������� ���� TDate, ������� ���������� ���������� ���� ��� ������, ���������� � ���� D.
������� �������� ������� DaysInMonth ��� ���� ������ ��� (��������������, ��� ��� ���� �������� �����������).
*/

using namespace std;

int main()
{
    int DataMonth;
    for (int i = 0; i < 5; ++i)
    {
        Point date;
        cin >> date.Day >> date.Month >> date.Year;
        DataMonth = date.Month;
        cout << DataMonth << endl;
        cout << date.Day << ' ' << date.Month << ' ' << date.Year;
        //cout << Point.DaysInMonth(date.Month);
        //printf("%d", Point::DaysInMonth(Point::Month)) //date.DaysInMonth(date.Month));
        //std::cout << date.DaysInMonth(date.Month);
    }
    return 0;
}
