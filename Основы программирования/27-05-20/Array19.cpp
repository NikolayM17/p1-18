/** Array19. ��� ������������� ������ A ������� 10.
������� ���������� ����� ���������� �� ��� ��� ��������� AK,
������� ������������� �������� ����������� A1 < AK < A10.
���� ����� ��������� ���, �� ������� 0.
*/

/// ������� �.�. �1-18 27.05.2020

#include <iostream>

using namespace std;

int main(){
    int mas[10];
    int k = 0;
    size_t i;
    for (i = 0;i < 10;i++)
        cin >> mas[i];
    for (i = 0;i < 10;i++)
        if(mas[i] > mas[0] && mas[i] < mas[9])
            k = mas[i];
    cout << k;
return 0;
}
