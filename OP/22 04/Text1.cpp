/**Text1�. ���� ��� ����� � ����� ������������� ����� N � K. ������� ��������� ���� � ��������� ������ � �������� � ���� N �����, ������ �� ������� ������� �� K �������� �*� (���������).
������� ����� �1-18*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ofstream output("output.txt");

	unsigned short n,k;

	cin >> n >> k;

	string s(k, '*');
	for (unsigned short i = 0; i < n; ++i)
		output << s << endl;

	output.close();

	return 0;
}
