/**������� 2. ��������� �.�., (c) 17.04.2020
�������� ������� ��������� ����� �����, -100 <= a <= b <= 100.
�������� ��� ��������: 1 - ��������, 2 - ���������.
��������� ����� ����� ��� ������������ ����� �� ���������.
����� ������ ��������� ��� � �������
������������ switch-case.
������� -2 �����

������ 1
Input
-2 5
1
Output
(-2)+(-1)+0+1+2+3+4+5=12

������ 2
Input
5 5
2
Output
5=5
�������� ���� �1-18*/
#include <iostream>
using namespace std;
int main()
{
    int a,b,k, pluss=0,ymnoj = 1;
    cin >> a>>b>>k;
     const char  *znak = ".";
    switch (k)
    {
    case 1:
        znak = "+";
        break;
    case 2:
        znak = "*";
        break;
    default:
        znak = ".";
        break;
    }
    if (znak != ".")
    {
     for (int i = a; i <=b;i++){
            if (i < 0){
            cout<<"("<<i<<")";
            if (i != b)
                cout<<znak;
            }
     else{
        cout<<i;
         if (i != b)
                cout<<znak;
     }
        if (znak == "+")
            pluss+=i;
        else if (znak == "*")
            ymnoj *= i;
     }
        if (znak == "+"){
            cout <<"="<< pluss;
        }
        else if (znak == "*"){
             cout <<"="<<ymnoj;
        }
    }
    else
        cout<< "Erorr";
    return 0;
}
