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
/// #include <cstdio>
#include <cstdlib>
#include <string>
#include "input.h"
#include "max.h"
#include "sum.h"
#include "print.h"

int main() {
    const int ARRSIZE = 3;
    const int MENUSIZE = 5;
    int v[ARRSIZE];
    std::string aMenu[] = {"�����", "����������", "���������� �������������", "���������� �����", "������"};
    int choice = 1;

    system("chcp 1251>nul");

    while (choice != 0) {
        /** ������ ���� */
        for (int item = 0; item < MENUSIZE; item++)
            std::cout << item << "." << aMenu[item] << std::endl;
        std::cout << "�����:";
        std::cin >> choice;
        switch (choice) {
        case 1:
            /** ���������� ������� */
            input(v, ARRSIZE);
            system("Pause");
            break;
        case 2:
            /** ���������� � ������ ������������� �������� */
            std::cout << "max = " << max(v, ARRSIZE) << std::endl;
            system("Pause");
            break;
        case 3:
            /** ���������� ����� */
            std::cout << "sum=" << sum(v, ARRSIZE) << std::endl;
            system("Pause");
            break;
        case 4:
            /** ������ ������� */
            print(v, ARRSIZE);
            system("Pause");
            break;
        case 0:
            /** ����� */
            std::cout << "�������� ���!" << std::endl;
            system("Pause");
            break;
        default:
            /** ��������� �� ������*/
            std::cout << "����� �� 0 �� 4" << std::endl;
            system("Pause");
            break;
        }
    }
    return 0;
}
