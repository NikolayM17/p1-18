// ������ ������
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ����� ������

typedef struct ClockFace
{
    char min;         // ������
    int h;           // ����
    // ���� ������� ����� ����� ����� ������ ���� ���
    // �������� ����� ������������ ���������� ��� ����
    int *dayOfmonth; // ����� ���������� ���� ������
} Ctime;

int main(){
    //��������� ���������� ���� Ctime
    Ctime timer1, timer2;
    // ��������� ���������� ��� ����
    int date ;
    printf("Enter Date: ");
    scanf("%d", &date );
    // �������� �������� ��������� timer1
    printf("Enter timer 1: ");
    scanf("%d%d", &timer1.h ,&timer1.min );

    // ����������� ����� ���������� date
    // �� ����� ��������� ������ � dayOfmonth �� ����
    timer1.dayOfmonth = &date;

    // �������� �������� ��������� timer1
    printf("Enter timer 2: ");
    scanf("%d%d", &timer2.h ,&timer2.min );
    // ����������� ����� ���������� date
    // �� ����� ��������� ������ � dayOfmonth �� ����
    timer2.dayOfmonth = &date;

    // ������� �������� ���� � ���������� ���������
    date++;

    // ������
    // *(timer1.dayOfmonth) - �������� �� ������ timer1.dayOfmonth
    printf("timer1: %02d %02hhd:%02hhd\n", *(timer1.dayOfmonth), timer1.h, timer1.min);
    printf("timer2: %02d %02hhd:%02hhd\n", *(timer2.dayOfmonth), timer2.h, timer2.min);
    return 0;
}

