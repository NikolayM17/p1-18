/** ���������� 3.13. ���������� � ������ ����� ����� �����. ��������� � ���������� ����� ������ ���� ������� ��������� � �������.
���� ���������� ��������� �������, �������� ������������ �� ���� � ���������� �������� ���������� �������� ��� ������������.
�������� ��������� ���, ����� ��� ���������� ����� ������� � ���������� ���������, ����� ����� ������� � �������������� � �.�. */

#include <iostream>
#include <vector>
#include "clocale"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian" );
    int x, h = 0;
    vector <int> vecs;
    cin >> x;
    while (x != 0){
        vecs.push_back(x);
        cin >> x;
    }
    if (vecs.size()%2 == 1){
        cout << "���-�� ����� ��������, ��������� ������� ��� �����." << endl;
        vecs.push_back(x);
        h = 1;
    }
    for(vector<int>::size_type ix = 0; ix != vecs.size(); ix += 2)
    cout << vecs[ix]+vecs[ix+1] << "  ";

    return 0;
}
