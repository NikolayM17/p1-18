#include <iostream>

/**
���������������� �� ����� �������� ������. ����������. �� ����� �++ ���.149
�.�. �������, �.�. ������, �.�. ���������; ��� ���. �.�. ���������

�������� ��������� �� ���� int, double, char.
������� �� ����� ������ ������, ���������� ����� �����������.
��������� ���������� ���������.
������� ϸ��
*/

int main()
{
    int *p = NULL;
    double *d = NULL;
    char *c = NULL;
    std::cout << sizeof(int*) << std::endl;
    std::cout << sizeof(double*) << std::endl;
    std::cout << sizeof(char*) << std::endl;
    std::cout << sizeof(*p) << std::endl;
    std::cout << sizeof(*d) << std::endl;
    std::cout << sizeof(*c) << std::endl;
    return 0;
}
