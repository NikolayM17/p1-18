/** Text3. ���� ��� ����� � ����� ����� N (0 < N < 27). ������� ��������� ���� � ��������� ������ � �������� � ���� N ����� ����� N;
������ � ������� K (K = 1, �, N) ������ ��������� K ��������� ��������� (�. �. ���������) ��������� ����, ����������� ������ ��������� �*� (���������).
��������, ��� N = 4 ���� ������ ��������� ������ �A***�, �AB**�, �ABC*�, �ABCD�.*/
# include <string>
# include <fstream>
# include <iostream>
using namespace std;
int main () {
string name;
int n, k, i;
    cin >> name >> n >> k;
string al,z(n-k,'*');
    ofstream fout;
    fout.open(name.c_str());
    for(i = 0;i<n;i++) {
        al += 'A'+i;
        if (i+1 != k)
            fout << al << endl;
        else
            fout << al << z << endl;
    }
    return 0;
}
