/** 9. ���������� 3.10. �������� ��������� ������ � ������ ������ ����������.
��������� ������ ��������� ������ ���������� ������, ���������� ����� ����������, � ������� �� �� ������, �� ��� ��� ������ ����������. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int i, n;
    getline(cin,str);
    n = str.size();
    for(i = 0;i < n;i++)
    {
        if (ispunct(str[i]))
            str[i] = ' ';

    }
    cout << "" << str << endl;
return 0;
}
