/**Text5. ���� ������ S � ��������� ����. �������� ������ S � ����� �����.*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ofstream file("text.txt", ios::app);
	string s;
	getline(cin, s);
	file << s << endl;
	file.close();
	return 0;
}
