///Begin22�. �������� ������� ���������� ���������� A � B � ������� ����� �������� A � B. �������� ���� �1-18 15.04
#include <iostream>
using namespace std;
int main(){
int a,b;
cin>> a >> b;
int c = b;
b = a;
a = c;
cout << a<<" "<< b;
return 0;
}
