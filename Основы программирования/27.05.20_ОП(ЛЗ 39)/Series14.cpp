#include <iostream>

/**
 �. �. �������
���� ����� ����� K � ����� ��������� ����� �����; ������� ��� ���������� � ����� 0.
������� ���������� ����� � ������, ������� K.
������� ϸ��
*/

int main()
{
    int k, el, nc = 0;
    std::cin >> k;
    std::cin >> el;
    while (el != 0)
    {
        if (el < k)
            ++nc;
        std::cin >> el;
    }
    std::cout << nc;
    return 0;
}
