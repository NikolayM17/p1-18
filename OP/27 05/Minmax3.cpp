/**Minmax3. ���� ����� ����� N � ����� �� N ���������������, �������� ������ ��������� � ������ ����� (a, b). ����� ������������ �������� �������������� �� ������� ������.
������� ����� �1-18 */
#include <iostream>
using namespace std;
int main(){
    int n, a, b , per, maxs;
    cout<< "Vvedite N: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Pramoygolnik nomer: " << i <<endl;
        cout << "a = ";
        cin >> a;
        cout<< endl;
        cout << "b = ";
        cin >> b;
        cout<< endl;
        per = 2 * (a + b);
        if (i == 1) maxs = per;
        else if (maxs < per ) maxs = per;
    }
    cout<< "Max Perimetr = "<< maxs;
    return 0;
}
