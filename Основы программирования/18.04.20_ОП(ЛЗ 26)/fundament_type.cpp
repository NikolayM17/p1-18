#include <iostream>

/**
Constantine Korikov
�������� ���������, ������� ������� ������� ����� int, float, char, bool � size_t � ����� .
������ �������� ������ ���� � ��������� ������ � ��������� �������.
��� ������ ����������� cout, ��������� ��� ���������.
������� ϸ��.
*/

int main()
{
    std::cout << sizeof(int) * 8 << std::endl;
    std::cout << sizeof(float) * 8 << std::endl;
    std::cout << sizeof(char) * 8 << std::endl;
    std::cout << sizeof(bool) * 8 << std::endl;
    std::cout << sizeof(size_t) * 8 << std::endl;
    return 0;
}
