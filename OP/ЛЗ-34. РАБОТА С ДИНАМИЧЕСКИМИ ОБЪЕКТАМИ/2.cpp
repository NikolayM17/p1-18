/** 2. ������ � ���������� �������� ���������� a � b. �������� �������� ���������� �������, ��������� ���������.
������� ����� �1-18
*/
#include <iostream>
using namespace std;

int main(){
    int a, b;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
    int *aa = &a, *bb = &b,temp;
	temp = *aa;
	*aa = *bb;
	*bb = temp;

	cout << "a = " << a << endl<< "b = " << b << endl;
    return 0;
}
