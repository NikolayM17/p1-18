#include <iostream>

/**
�. �. �������
������� ������� SumRange(A, B) ������ ����, ��������� ����� ���� ����� ����� �� A �� B ������������ (A � B � �����).
���� A > B, �� ������� ���������� 0. � ������� ���� ������� ����� ����� ����� �� A �� B � �� B �� C,
���� ���� ����� A, B, C.
������� ϸ��
*/

void SumRange(int *a, int *b, int *summ)
{
    if (*a > *b)
    {
        *summ = 0;
    }
    else
    {
        for(; *a <= *b; ++*a)
        {
            *summ += *a;
        }
    }
}

int main()
{
    int a, b, c, summ = 0;
    std::cin >> a >> b >> c;
    SumRange(&a, &b, &summ);
    std::cout << summ << std::endl;
    summ = 0;
    SumRange(&b, &c, &summ);
    std::cout << summ;
    return 0;
}
