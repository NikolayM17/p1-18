// ©  М. Э. Абрамян (Южный федеральный университет), 1998–2020
// If1. Дано целое число. Если оно является положительным, то вычесть из него 8; в противном случае не изменять его. Вывести полученное число.
// Автор решения: Груздев Роман Игоревич

#include <iostream>
using namespace std;

int main(){
int n;
	cin >> n;
    if (n >= 0)
	cout << n - 8 << endl;
    else
	cout << n << endl;

   return 0;
}

/**
Input:
37

Output:
29
~~~~~~~~~~~~~~~~~~~
Input:
-94

Output:
-94

*/