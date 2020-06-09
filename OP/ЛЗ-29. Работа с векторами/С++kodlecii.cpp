/** ������� 1.
����������� ��������� � ���� ��� ������ � �������� �����
����� �� 10 ���������. ������ ����: ����������, ����������
�������������, ���������� �����, ������, �����.
��� ������� �������� (����� ������) ����������� �������,
����������� � �������� ���������� ����� ������� ��������
������� � ���������� ���������.
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
int max(int *v, int n) {
    int imax = 0;
    for (int i = 1; i < n; i++)
        if (v[i] > v[imax])
            imax = i;
    return v[imax];
}
void input(int *v, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "v[" << i << "]=";
        std::cin >> v[i];
    }
}
int sum(int *v, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += v[i];
    return s;
}
void print(int *v, int n) {
    for (int i = 0; i < n; i++)
        std::cout << v[i] << (i < n-1 ? ", " : "\n");
}
int main() {
    const int ARRSIZE = 10;
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
