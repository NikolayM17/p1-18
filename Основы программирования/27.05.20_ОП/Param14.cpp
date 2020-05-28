#include <iostream>

/**
�. �. �������
������� ��������� Split1(A, NA, B, NB, C, NC), ����������� �� ������������� ������� A ������� NA ��� ������������ ������� B � C ������� NB � NC ��������������;
��� ���� ������ B �������� ��� �������� ������� A � ��������� ����������� �������� (1, 3, �),
� ������ C � ��� �������� ������� A � ������� �������� (2, 4, �).
������� B � C � ����� NB � NC �������� ��������� �����������.
��������� ��� ��������� � ������� ������� A ������� NA � ������� ������ � ���������� ���������� �������� B � C.
������� ϸ��
*/

void Split1(int a[], int *na, int b[], int *nb, int c[], int *nc)
{
    int index_b = 0, index_c = 0;
    for (int i = 0; i < *na; ++i)
    {
        if (i % 2 != 0)
        {
            b[index_b] = a[i];
            ++index_b;
        }
        if (i % 2 == 0)
        {
            c[index_c] = a[i];
            ++index_c;
        }
    }
}

int main()
{
    // na = 11, nb = 5, nc = 5
    int na, nb, nc;
    std::cin >> na >> nb >> nc;
    int a[na] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[nb];
    int c[nc];
    Split1(a, &na, b, &nb, c, &nc);

    for (int i = 0; i < na; ++i)
    {
        std::cout << a[i] << ' ';
    }

    std::cout << std::endl;

    for (int i = 0; i < nb; ++i)
    {
        std::cout << b[i] << ' ';
    }

    std::cout << std::endl;

    for (int i = 0; i < nc; ++i)
    {
        std::cout << c[i] << ' ';
    }
    return 0;
}
