/** Minmax19�. ���� ����� ����� N � ����� �� N ����� �����.
����� ���������� ����������� ��������� �� ������� ������.
*/

/// ������� �.�. �1-18 27.05.2020

#include <iostream>

int main(){
    int mini,k =0,n;
    std::cin >> n;
    int mas[n];
    for(size_t i = 0;i < n;i++){
        std::cin >> mas[i];
        if (mini == mas[i])
            k++;
        else if (mini > mas[i]){
            mini = mas[i];
            k = 1;
        }
    }
    std::cout << mini << " - " << k;
    return 0;
}
