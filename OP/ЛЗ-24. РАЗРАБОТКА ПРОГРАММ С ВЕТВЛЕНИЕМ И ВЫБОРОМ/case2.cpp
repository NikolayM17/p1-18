///Case2�. ���� ����� ����� K. ������� ������-�������� ������, ��������������� ����� K
///(1 � ������, 2 � ��������������������, 3 � ������������������, 4 � �������, 5 � ��������). ���� K �� ����� � ��������� 1�5, �� ������� ������ �������.������� ����� �1-18 15 04 2020
/** ������ ������ */
#include <iostream>
using namespace std;
/** ����� ������ */
int main() {
    int k;
    char *days = "glhf"; /* ����������� � �������������� */
    cin >> k;
    switch (k) {
    case 1:
        days = "Ploxo";
        break;
    case 2:
         days = "Neydovletvoritelno";
        break;
    case 3:
         days = "Ydovletvoritelno";
        break;
    case 4:
         days = "Xorosho";
        break;
    case 5:
         days = "Otlichno";
        break;
    default:
        days = "gg";
        break;
    }
    if (days != "gg")
        cout << days;
    else
        cout << "wrong number" << endl;
    return 0;
}
