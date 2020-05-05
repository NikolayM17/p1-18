/** ������� 1. (��������� �.�., ����� ����, 23.04.2020)
����������� ��������� � ���� ��� ������ � �������� �����
����� �� 10 ���������. ������ ����: ����������, ����������
�������������, ���������� �����, ������, �����.
��� ������� �������� (����� ������) ����������� �������,
����������� � �������� ���������� ����� ������� ��������
������� � ���������� ���������.
*/

/** ���� C-3. ������ */
#include <stdio.h>
#include <stdlib.h>
#define ARRSIZE 3
#define MENUSIZE 5
#include "input.h"
#include "max.h"
#include "sum.h"
#include "print.h"

int main() {
    int v[ARRSIZE];
    char *aMenu[] = {"�����", "����������", "���������� �������������", "���������� �����", "������"};
    int choice = 1;
    int item;

    system("chcp 1251>nul");

    while (choice != 0) {
        /** ������ ���� */
        for (item = 0; item < MENUSIZE; item++)
            printf("%d.%s\n", item, aMenu[item]);
        printf("�����:");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            /** ���������� ������� */
            input(v, ARRSIZE);
            system("Pause");
            break;
        case 2:
            /** ���������� � ������ ������������� �������� */
            printf("max=%d\n", max(v, ARRSIZE));
            system("Pause");
            break;
        case 3:
            /** ���������� ����� */
            printf("sum=%d\n", sum(v, ARRSIZE));
            system("Pause");
            break;
        case 4:
            /** ������ ������� */
            print(v, ARRSIZE);
            system("Pause");
            break;
        case 0:
            /** ����� */
            printf("�������� ���!\n");
            system("Pause");
            break;
        default:
            /** ��������� �� ������*/
            printf("����� �� 0 �� 4\n");
            system("Pause");
            break;
        }
    }
    return 0;
}
