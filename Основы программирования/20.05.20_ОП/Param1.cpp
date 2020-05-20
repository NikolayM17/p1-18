#include <iostream>

/**
�. �. �������
������� ������� MinElem(A, N) ������ ����, ��������� ����������� ������� �������������� ������� A ������� N.
� ������� ���� ������� ����� ����������� �������� �������� A, B, C ������� NA, NB, NC ��������������.
������� ϸ��
*/

int MinElem(int *a, int n)
{
    int m = a[0];
    for (int i = 0; i < n; ++i)
    {
        if (m > a[i])
        {
            m = a[i];
        }
    }
    return m;
}
int main()
{
    int na, nb, nc;
    na = nb = nc = 11;
    int a[na] = {6, 4, 67, 34, 2, 6, 8, 44, 65, 23, -543};
    int b[nb] = {7, 5, 6, 14, 24, 46, 65, 10, 652, 26, 543};
    int c[nc] = {6, 4, 67, 34, 2, 6, 8, 44, 65, 23, 543};
    std::cout << MinElem(a, na) << std::endl;
    std::cout << MinElem(b, nb) << std::endl;
    std::cout << MinElem(c, nc) << std::endl;
    return 0;
}
