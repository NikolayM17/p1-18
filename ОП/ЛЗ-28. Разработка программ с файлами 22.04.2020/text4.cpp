
#include <iostream>
#include <fstream>
/*Text4�. ��� ��������� ����.
������� ���������� ������������ � ��� �������� � �����
(������� ������ ����� EOLN � ����� ����� EOF ��� �������� ���������� �������� �� ���������).*/
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	char ch;
	int i = 0;
	int j = 0;

	ifstream fin;
	fin.open("1.txt");

	fin.get(ch);

	while (!fin.eof())
	{
		i++;
		fin.get(ch);
		if (ch == '\n')
			j++;
	}

	fin.close();

	j--;
	i -= j;

	cout << "���������� ��������: " << i << endl;
	cout << "���������� �����: " << j;

	return 0;
}
