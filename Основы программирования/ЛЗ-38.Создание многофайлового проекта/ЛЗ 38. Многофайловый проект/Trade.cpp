/** ������������ ������� 38. �������� �������������� �������.
������� ������� �� 2-� �������: ������� �., ������� �.
�1-18, 26.05.2020 �.
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "command.h"

using namespace std;

// ����
void menu() {
    cout << "0. �����\n";
    cout << "1. ��������� �� �����\n";
    cout << "2. ��������� � ����\n";
    cout << "3. �������� ����� �����\n";
    cout << "4. ������������� ����� ������\n";
    cout << "5. ������� �����\n";
    cout << "6. ����������� �� ����\n";
    cout << "7. ������ ���� �� ������� �������� (�� �������� ����� �����)\n";
    cout << "8. ������ ����� ������\n";
}

int main() {
    system("chcp 1251>nul");
    vOrders v;
    string fname = "orders.txt";
    int id; // ���������� ��� ������ ������
    int choice = -1; // ���������� ������ "�����"
    while (choice != 0) {
        menu();
        cin >> choice;
        switch (choice) {
        case 0:
            // 0. �����
            break;
        case 1:
            // 1. ��������� �� �����
            load(v, fname);
            break;
        case 2:
            // 2. ��������� � ����� ����
            save(v, fname);
            break;
        case 3:
            // 3. �������� ����� �����
            append(v);
            break;
        case 4:
            // 4. ������������� ����� ������
            Date dat;
            char delim;
            cout << "������� ����� ������ � ������� ����� �������� �����, � ����� ���� ������:\n" ;
            cin >> id  >> dat.year >> delim >> dat.month >> delim >>dat.day; // ���� ����� ����
            edit(v,id,dat);
            break;
        case 5:
            // 5. ������� �����
            cout << "������� ����� ������ � ������� ����� �������:";
            cin >> id;
            del(v,id);
            break;
        case 6:
            // 6. ����������� �� ����
            vsort(v);
            break;
        case 7:
            // 7. ������ ���� �� ������� �������� (�� �������� ����� �����)
            print_salers(v);
            break;
        case 8:
            // 8. ������ ����� ������Microsoft Office 2007
            print_all(v);
            break;
        default:
            cout << "�������� ����. �� 0 �� 8" << endl;
            break;
        }
    }

    return 0;
}
