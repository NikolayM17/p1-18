/** ������� 1. (��������� �.�., ����� ����, 23.04.2020)
����������� ��������� � ���� ��� ������ � �������� �����
����� �� 10 ���������. ������ ����: ����������, ����������
�������������, ���������� �����, ������, �����.
��� ������� �������� (����� ������) ����������� �������,
����������� � �������� ���������� ����� ������� ��������
������� � ���������� ���������.
*/

/** ���� C++2. ������ */
#include <iostream>
///#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include "input.h"
#include "max.h"
#include "sum.h"
#include "print.h"

int main() {
    const int MENUSIZE = 5;
    size_t arrsize = 3;
    std::vector <int> v(arrsize);
    std::string aMenu[] = {"�����", "����������", "���������� �������������", "���������� �����", "������"};
    int choice = 1;
    /* ����� ��������
    ����� ���������� ��������� v.push_back(),
    ��� � Python v.append() */

    system("chcp 1251>nul");
    while (choice != 0) {
        /// ������ ����
        for (int item = 0; item < MENUSIZE; item++)
            std::cout << item << "." << aMenu[item] << std::endl;
        std::cout << "�����:";
        std::cin >> choice;
        switch (choice) {
        case 1:
            /// ���������� �������
            input(v, arrsize);
            system("Pause");
            break;
        case 2:
            /// ���������� � ������ ������������� ��������
            std::cout << "max = " << max(v) << std::endl;
            system("Pause");
            break;
        case 3:
            /// ���������� �����
            std::cout << "sum=" << sum(v) << std::endl;
            system("Pause");
            break;
        case 4:
            /// ������ �������
            print(v);
            system("Pause");
            break;
        case 0:
            /// �����
            std::cout << "�������� ���!" << std::endl;
            system("Pause");
            break;
        default:
            /// ��������� �� ������
            std::cout << "����� �� 0 �� 4" << std::endl;
            system("Pause");
            break;
        }
    }
    return 0;
}
