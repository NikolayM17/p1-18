/**Array3. ���� ����� ����� N (> 1), � ����� ������ ���� A � �������� D
 �������������� ����������. ������������
� ������� ������ ������� N, ���������� N ������ ������ ������ ����������:
������� ����� �1-18*/

#include <iostream>
using namespace std;
int main(){
    int arr[100], n,a,d;
    cout << "N = ";
    cin >> n;
    cout << endl << "A = ";
    cin >> a;
    cout << endl << "D = ";
    cin >> d;
    arr[0] = a;
    for(int i = 1; i < n ; i++){
        arr[i] = arr[i-1]+d;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
