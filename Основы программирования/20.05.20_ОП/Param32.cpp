#include <iostream>
#include <string>

/**
�. �. �������
������� ��������� UpCaseRus(S), ������������� ��� �������� ������� ����� ������ S � ��������� (��������� ������� ������ S �� ����������).
������ S �������� ������� � �������� ����������. ��������� ��������� UpCaseRus, ������������� ���� ������ �����.
������� ϸ��
*/

void UpCaseRus(char (&s)[100], int *len)
{
    for(int i = 0; i < *len; ++i)
    {
        if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }
}

int main()
{
    int i;
    char str[100];
    std::cin >> str;
    for (i = 0; str[i] != '\0'; ++i);
    UpCaseRus(str, &i);
    std::cout << str;
    return 0;
}
