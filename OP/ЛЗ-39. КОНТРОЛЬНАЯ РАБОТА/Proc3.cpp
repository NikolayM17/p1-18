/**Proc3. ������� ��������� Mean(X, Y, AMean, GMean), ����������� ������� �������������� AMean = (X+Y)/2 � ������� �������������� GMean = (X�Y)1/2 ���� ������������� ����� X � Y (X � Y � �������
 AMean � GMean � �������� ��������� ������������� ����). � ������� ���� ��������� ����� ������� �������������� � ������� �������������� ��� ��� (A, B), (A, C), (A, D), ���� ���� A, B, C, D.*/
 #include <iostream>
 #include <cmath>
 using namespace std;
 void mean(float x,float y, float amean,float gmean){
amean = (x+y)/2;
gmean = pow(x*y,0.5);
cout<<"srednieArifmetich: "<<amean<<endl;
cout<<"srednieGeometricheskoe: "<<gmean<<endl;
}
 int main(){
     float a,b,c,d,amean,gmaen;
     cout<<"Vvedite a: ";
     cin>>a;
     cout<<endl;
      cout<<"Vvedite b: ";
     cin>>b;
     cout<<endl;
      cout<<"Vvedite c: ";
     cin>>c;
     cout<<endl;
      cout<<"Vvedite d: ";
     cin>>d;
     cout<<endl;
     cout<<"1 Para "<<endl;
     mean(a,b,amean,gmaen);
     cout<<endl<<"2 Para "<<endl;
     mean(a,c,amean,gmaen);
     cout<<endl<<"3 Para "<<endl;
     mean(a,d,amean,gmaen);
 return 0;
 }
