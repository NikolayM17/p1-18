#include <iostream>

/**
�. �. �������
���� ������. ���������� ���������� ������������ � ��� ��������� ��������� ����.
������� ϸ��
*/

int main()
{
    int nc = 0;
    std::string str;
    getline(std::cin, str);
    for (int i = 0; i < str.length(); ++i)
    {
        if (isupper(str[i]))
        {
            ++nc;
        }
    }
    std::cout << nc;
    return 0;
}
