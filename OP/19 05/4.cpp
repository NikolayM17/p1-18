/**4. � ���������� ������ �������� ���� ������������ ����������. ��������� �� ����� � ��������, ������� ��������� �� �����. ������ ������, ��������� ������������ ������.
������� ����� �1-18
*/
#include <iostream>
using namespace std;
int main(){
	double a, b;
    	cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

	double *psum = new double, *pdiff = new double;
	double  *aa = &a, *bb = &b;
	*psum = *aa + *bb;
	*pdiff = *aa - *bb;

	cout << "Sum: " << *psum << endl;
	cout << "Diff: " << *pdiff << endl;

	delete psum;
	delete pdiff;

    return 0;
}
