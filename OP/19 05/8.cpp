/**
 8. ������ � ���������� �������� ���������� a � b. �������� �������� ���������� �������, ��������� ������.
 ������� ����� �1-18
*/
#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int &aa = a, &bb = b;
	int temp;
	temp = aa;
	aa = bb;
	bb = temp;
	cout << endl<< "Has become" << endl<< "a = " << a << endl<< "b = " << b << endl;
	return 0;
}
