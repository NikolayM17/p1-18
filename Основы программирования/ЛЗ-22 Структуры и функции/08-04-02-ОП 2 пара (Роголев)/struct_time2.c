#include <stdio.h>

struct Time {
    int h ;
    int m ;
};

int time2min(struct Time t) {
    t.m = t.h*60+t.m;
    return t.m;
}

int  main() {
    struct Time t;
    int mm;

    scanf("%d%d", &t.h, &t.m);    // ��������� ���� � ������ �� ������� hh:mm � ���� h � m ���������� t

    mm = time2min(t);           // ��������� ������ � 0:00

    printf("%d\n", mm);          // �������� ���������

    return 0;
}
