/**������� 1. ��������� �.�., (c) 17.04.2020
����������� ���������� �����, ������� �������� ��������� ��� ����� �������, ��� � ������ ������.
��������, 121, 5, 4774 - ����������, 122 - �� �������� �����������.
��������� ������� ����� ������� �� 10 ����� � ������ ��� ���������� � ��������� �� 1 �� N, ��� 1 <= N < 1000.
������� - 1 ����
�� ������������� - ����� 1 ����.
����������. ������� ��������� �����������, ���� �������� ��� ������ ��� ������������ �����, ��� �� � ������ ������.
� ������ ������ ������� ����� ���� ����������� �� �������

������
Input
30
Output
1,2,3,4,5,6,7,8,9,22
�������� ���� �1-18*/
#include <iostream>
using namespace std;
void poli(int n){
    int i = 0,s = 0;
 if (n < 10)
    {
        if(n ==1){
            cout<<"1";
        }
        else{
        for (int i=1;i <=n;i++)
        {
            cout << i;
            if (i != n)
                cout<<",";
            else
                cout<<"";
        }
    }
    }
    if (n >= 10)
    {
        for (i;i <= n; i++)
        {
            while (i < 9)
            {
                i++;
                cout << i;
                  if (i != n or n-i!=1)
                cout<<",";
            else
                cout<<"";
                s++;
                if (s  == 10){
                    cout<<endl;
                    s = 0;
                }
            }
            if (i < 100)
                if (i / 10 == i % 10)
                {
                    cout << i;
                    if (n - i > 10)
                cout<<",";
            else
                cout<<"";
                    s++;
                if (s  == 10){
                    cout<<endl;
                    s = 0;
                }
                }
            if (i >= 100)
                if (i % 10 == i / 100)
                {
                    cout << i;
                    if (n - i > 10)
                cout<<",";
            else
                cout<<"";
                    s++;
                if (s  ==10){
                    cout<<endl;
                    s = 0;
                }
                }
        }
    }
}
int main()
{
    int i = 0;
    int n;
    cin >> n;
    poli(n);
    return 0;
}
