#include <iostream>

/**
���������������� �� ����� �������� ������. ����������. �� ����� �++ ���.149
�.�. �������, �.�. ������, �.�. ���������; ��� ���. �.�. ���������

� ���������� ������ �������� ������������ ����������.
�������� ������ �� ��� ����������.
������� �� ����� ����� ������, ���������� ���������� � �������.
��������� ���������� ����������.
������� ϸ��
*/

int main()
{
    double a;
    std::cin >> a;
    double &ptr = a; // �� ��������� �� ������ &ptr ����� a
    std::cout << "perem: " << sizeof(a) << ' ' << "link: " << sizeof(ptr) << std::endl;
    std::cout << a << ' ' << ptr << ' ' << &ptr;
    return 0;
}
