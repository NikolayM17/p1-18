#include <iostream>

/**
�. �. �������
������� ������� Power2(A, N) ������������� ����, ��������� �������� AN (A � ������������, N � ����� ��������) �� ��������� ��������:
A0 = 1
AN = A�A���A    (N ������������),    ���� N > 0;
AN = 1/(A�A���A)    (|N| ������������),    ���� N < 0.
� ������� ���� ������� ����� AK, AL, AM, ���� ���� ����� A, K, L, M.
������� ϸ��
*/

double Power2(double a, double n)
{
    double result = 1;
    if (n == 0)
    {
        a = 1;
    }
    else if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            result *= a;
        }
    }
    else if (n < 0)
    {
        n = n * (-1);
        for (int i = 1; i <= n; i++)
        {
            result *= a;
        }
        return 1 / result;
    }
    return result;
}

int main()
{
    double a, k, l, m;
    std::cin >> a >> k >> l >> m;
    std::cout << Power2(a, k) << ' ' << Power2(a, l) << ' ' << Power2(a, m);
    return 0;
}
