/*
 * Param60�. ��������� ��� TDate � ������� LeapYear (��. ������� Param59), ������� ������� DaysInMonth(D) ������ ���� � ���������� ���� TDate, ������� ���������� ���������� ���� ��� ������, ���������� � ���� D. ������� �������� ������� DaysInMonth ��� ���� ������ ��� (��������������, ��� ��� ���� �������� �����������)
 */

#include <iostream>
#include "tdate.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");

	const size_t N = 5;

	for (size_t i = 0; i != N; ++i){
		tdate date;
		cout << i+1 << ". " << "������� ����, �����, ���: ";
		cin >> date.day >> date.month >> date.year;
		cout << "� ���� ������: "<< date.days_in_month() << " ����." << endl
			<< endl;
	}

	return 0;
}
