/** ���������� 3.14. ���������� ��������� �����, �������� ������ ��������� ����� ��� ��������� ������� �������.
������������ ������� ������� ����� � ���������.
���������� ��������������� �������� �������, ������ �� ������ ���� � ������. */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string x,d;
    int i;
    vector <string> svec;
    cin >> x;
    d = '0';
    while (x != d){
        svec.push_back(x);
        cin >> x;
        i++;
    }
    for(int ix = 0; ix < svec.size(); ++ix)
    {
        if ((ix)%8==0)
            cout << endl;
        cout << svec[ix] << "  ";
    }
    return 0;
}
/// ��� �������� � ���������
