#include <iostream>

/**
 �. �. �������
������� ��������� ShiftRight3(A, B, C),
����������� ������ ����������� �����: �������� A ��������� � B,
�������� B � � C, �������� C � � A (A, B, C � ������������ ���������, ���������� ������������ �������� � ���������). � ������� ���� ��������� ��������� ������ ����������� ����� ��� ���� ������ ������� �� ���� �����:
(A1, B1, C1) � (A2, B2, C2).
������� ϸ��
*/

void ShiftRigth3(int *a, int *b, int *c)
{
    int temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    ShiftRigth3(&a, &b, &c);
    std::cout << a << ' ' << b << ' ' << c << std::endl;

    std::cin >> a >> b >> c;
    ShiftRigth3(&a, &b, &c);
    std::cout << a << ' ' << b << ' ' << c << std::endl;
    return 0;
}
