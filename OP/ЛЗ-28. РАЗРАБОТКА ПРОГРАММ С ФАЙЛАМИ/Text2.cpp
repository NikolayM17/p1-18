/**Text2. ���� ��� ����� � ����� ����� N (0 < N < 27). ������� ��������� ���� � ��������� ������ � �������� � ���� N �����: ������ ������ ������ ��������� �������� (�. �. ���������) ��������� �����
 �a�, ������ � ����� �ab�, ������ � ����� �abc� � �. �.; ��������� ������ ������ ��������� N ��������� �������� ��������� ���� � ���������� �������.
 ������� ����� �1-18*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ofstream file("text.txt");

	string s;
	unsigned short n;

	cin >> n;

	if (n <= 26)
		for (unsigned short i = 0; i < n; ++i){
			s += 'a' + i;
			file << s << endl;
		}
	else
		cout << "Error: bruh\n";
	file.close();
	return 0;
}
