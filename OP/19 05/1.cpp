/** 1. �������� ��������� �� ���� int, double, char. ������� �� ����� ������ ������, ���������� ����� �����������. ��������� ���������� ���������.
������� ����� �1-18
*/

#include <iostream>
using namespace std;

int main(){
    int *i;
    double *d;
    char *c;
    cout << "Size  int: " << sizeof(i) << " byte" << endl
		<< "Size  double: " << sizeof(d) << " byte" << endl
		<< "Size  char: " << sizeof(c) << " byte" << endl;

    return 0;
}
