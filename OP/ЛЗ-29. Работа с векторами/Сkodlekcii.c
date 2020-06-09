/** ������� 1.
����������� ��������� � ���� ��� ������ � �������� �����
����� �� 10 ���������. ������ ����: ����������, ����������
�������������, ���������� �����, ������, �����.
��� ������� �������� (����� ������) ����������� �������,
����������� � �������� ���������� ����� ������� ��������
������� � ���������� ���������.
*/
#include <stdio.h>
#include <stdlib.h>
#define ARRSIZE 10
#define MENUSIZE 5
/** ���������� */
void input(int *v, int n);
/** ���������� ������������� */
int max(int *v, int n);
/** ���������� ����� */
int sum(int *v, int n);
/** ������ */
void print(int *v, int n);
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
/** ���������� */
void input(int *v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("v[%d]=", i);
        scanf("%d", (v+i));
    }
}
/** ���������� ������������� */
int max(int *v, int n) {
    int imax = 0;
    int i;
    for (i = 1; i < n; i++)
        if (*(v+i) > *(v+imax))
            imax = i;
    return *(v+imax);
}
/** ���������� ����� */
int sum(int *v, int n) {
    int s = 0;
    int i;
    for (i = 0; i < n; i++)
        s += *(v + i);
    return s;
}
/** ������ */
void print(int *v, int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d%s", *(v+i), (i < n-1 ? ", " : "\n"));
}



