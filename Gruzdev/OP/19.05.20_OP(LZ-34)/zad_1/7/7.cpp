/** 7. В программе объявить целочисленную переменную и ссылку на
нее. Изменить значение переменной, используя ссылку. Вывести значе 
ние ссылки на экран.*/
// Выполнил: Груздев Роман, П1-18

#include <iostream>
using namespace std;

int main(){
    int a, &la = a;
	cout << "Enter a: ";
	cin >> a;
	cout << "a = " << a << endl;
	la = 7;
	cout << "a = " << la << endl;


    return 0;
}
