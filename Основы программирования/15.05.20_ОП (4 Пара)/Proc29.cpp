#include <iostream>

/**
�. �. �������
������� ������� DigitCount(K) ������ ����, ��������� ���������� ���� ������ �������������� ����� K.
��������� ��� �������, ����� ���������� ���� ��� ������� �� ���� ������ ����� ������������� �����.
������� ϸ��
*/

int DigitCount(int k)
{
    int p, nc = 0;
    while(k > 0)
    {
        k = k / 10;
        ++nc;
    }
    return nc;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << DigitCount(n);
    return 0;
}
