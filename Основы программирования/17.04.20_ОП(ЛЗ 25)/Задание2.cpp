#include <iostream>

/**
��������� �.�.
������� 2. ��������� �.�., (c) 17.04.2020
�������� ������� ��������� ����� �����, -100 <= a <= b <= 100.
�������� ��� ��������: 1 - ��������, 2 - ���������.
��������� ����� ����� ��� ������������ ����� �� ���������.
����� ������ ��������� ��� � �������
������������ switch-case.
������� - 2 �����
������� ϸ��
*/

using namespace std;

int main()
{
    int a, b, summ = 0, mult = 1, oper;
    cin >> a >> b >> oper;
    for(int i = a; i <= b; ++i){
        switch(oper){
            case 1 :
                if (i == b){
                    cout << i;
                    summ += i;
                    break;
                }
                if (i < 0){
                    cout << "(" << i << ")" << "+"; summ += i; break;
                }
                else{
                    cout << i << "+";
                    summ += i;
                    break;
                }
            case 2 :
                if (i == b){
                    cout << i;
                    mult *= i;
                    break;
                }
                if (i < 0){
                    cout << "(" << i << ")" << "*"; mult *= i; break;
                }
                else{
                    cout << i << "*";
                    mult *= i;
                    break;
                }
        }
    }
    if (oper == 1){
        cout << "=" << summ << endl;
    }
    if (oper == 2){
        cout << "=" << mult << endl;
    }
    return 0;
}
/**
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
*/
