#include <iostream>

/**
� ���������� ������ ������, ��������� �� ���������� ����, ������������ ����� ��������. ��� �������� ������ ������������ ����� ��� ������ TEXT,
��������� � ������� typedef. �������� ������� �������� ���������� ���� � ������.
*/

typedef char TEXT[100];

int main()
{
    int nc = 1, len_word = 0;
    TEXT str;
    std::cin.get(str, 100);

    for (int i = 0; str[i] != '\0'; ++i){
        if (str[i] == ' ' && len_word > 2)
        {
            len_word = 0;
            ++nc;
        }
        if (str[i] != ' ')
        {
            ++len_word;
        }
        //std::cout << str[i];
    }
    std::cout << nc;
    return 0;
}
