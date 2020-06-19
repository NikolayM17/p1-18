// ������ ������
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ����� ������

// ����� ��������� struct Coord  ������� Point - ����� ��� ����

typedef struct Coord
//  ����� �� ���������
{
    short int x;   // ���������� ����� x
    short int y;   // ���������� ����� y
    short int z;   /// ���������� ����� z
} Point;
// ������ ������ struct Coord a;
// ����� �������� ������ Point a;


typedef struct LineSegment
{
    // �������� ������ �������
    // Point - ��� ��������� struct Coord
    Point a;        // ������� a
    Point b;        // ������� b
    float distance; // ���������� ����� ��������� (����� �������)
} Line; // ����� ��� ���� Line


int main(){
    //��������� ���������� ���� Line
    Line lin;

    // �������� �������� ����������� ������ ������� lin
    printf("Enter 3 cord for A Point: ");
    scanf("%d%d%d",&lin.a.x, &lin.a.y, &lin.a.z);
    printf("Enter 3 cord for B Point: ");
    scanf("%d%d%d",&lin.b.x, &lin.b.y, &lin.b.z);

    // �������� ����� ������� lin � �������� ��� �������� �������� distance

    lin.distance = sqrtf(pow((lin.a.x - lin.b.x),2) +
                         pow((lin.a.y - lin.b.y),2) +
                         pow((lin.a.z - lin.b.z),2));

    // ������
    printf("lin: a(%d, %d, %d) b(%d, %d, %d) , %0.2f\n",
           lin.a.x, lin.a.y, lin.a.z,
           lin.b.x, lin.b.y, lin.b.z,
           lin.distance);
    return 0;
}
