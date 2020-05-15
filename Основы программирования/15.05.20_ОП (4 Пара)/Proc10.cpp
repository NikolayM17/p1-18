#include <iostream>

/**
�. �. �������
������� ��������� Swap(X, Y), �������� ���������� ���������� X � Y
(X � Y � ������������ ���������, ���������� ������������ �������� � ���������).
� �� ������� ��� ������ ���������� A, B, C, D ��������������� �������� ���������� ��������� ���:
A � B, C � D, B � C � ������� ����� �������� A, B, C, D.
������� ϸ��
*/

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    Swap(&a, &b);
    Swap(&c, &d);
    Swap(&b, &c);
    std::cout << a << ' ' << b << ' ' << c << ' ' << d;
    return 0;
}
