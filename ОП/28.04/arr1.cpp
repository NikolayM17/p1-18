/** [2] Array112. ��� ������ A ������� N (<=6).
����������� ��� �� ����������� ������� ���������� ������� ������� (������������ �����������):
������������� ������, ��������� ��� �������� �������� (A1 � A2, A2 � A3 � �. �.) � ����� �� �������,
���� ����� ������� ���� ������ �������; ��������� ��������� �������� N - 1 ���.
��� �������� �� ������������ ���������� �������� ���������� ������� ����� ������� ���������.
������, ��� ��� ������ ��������� ���������� ������������� ��� ����� ��������� �� 1.
�������� ���� �1-18*/
#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int arr[10],sortirovka;
    int n;
    cout << "������� ������ ������� �������(n<=6): " << endl;
            cin >> n;
    cout << "������� n ����� ��� ���������� ������� arr: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for(int j = 0;j < n-1;j++){
        for(int i = 0;i < n-1-j;i++) {
            if (arr[i] > arr[i+1]){
                sortirovka = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = sortirovka;
            }
        }
    cout << j+1 << " ����� ��� ������������� ������ �����������: " ;
    for(int i = 0;i < n;i++)
    cout << arr[i] << " ";
    cout << endl;
    }
    return 0;
}
