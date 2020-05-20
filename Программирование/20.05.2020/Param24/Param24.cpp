/** Param24. Описать процедуру SwapCol(A, M, N, K1, K2), осуществляющую перемену местами столбцов вещественной матрицы A размера M × N с номерами K1 и K2. Матрица A является входным и выходным параметром; если K1 или K2 больше N, то матрица не изменяется. Используя эту процедуру, поменять для данной матрицы A размера M × N столбцы с данными номерами K1 и K2.
 */
// Выполнил: Герасимов Д.А., П1-18, 20.05.2020

#include <iostream>
#include <vector>

#include "swap_col.h"

using namespace std;

void SwapCol(vector<vector<double>> *mtrx, size_t row, size_t col, size_t k1, size_t k2);

int main(){
	setlocale(LC_ALL, "rus");
	
	cout << "Введите количество строк и количество столбцов матрицы: ";
	size_t row, col;
	cin >> row >> col;
	
	vector <vector<double>> mtrx;
	cout << "Введите элементы матрицы:" << endl;
	mtrx.resize(row);
	for (size_t i = 0; i != row; ++i){
		mtrx[i].resize(col);
		for (size_t j = 0; j != col; ++j)
			cin >> mtrx[i][j];
	}
	
	cout << "Введите номера столбцов которые вы бы хотели поменять: ";
	size_t k1, k2;
	cin >> k1 >> k2;

	SwapCol(&mtrx, row, col, k1, k2);
	
	cout << endl 
		<< "Output:" << endl;
	for (size_t i = 0; i != row; ++i){
		for (size_t j = 0; j != col; ++j)
			cout << mtrx[i][j] << ' ';
		cout << endl;
	}
	cout << endl;

	return 0;
}

void SwapCol(vector <vector <double>> *mtrx, size_t row, size_t col, size_t k1, size_t k2){

	if ((k1 <= col && k2 <= col) && (k1 != k2) && (k1 != 0 && k2 != 0)){
		vector <vector <double>> loc_mtrx = *mtrx;
		double temp = 0;
		for (size_t i = 0; i != row; ++i){
			temp = loc_mtrx[i][k1-1];
			loc_mtrx[i][k1-1] = loc_mtrx[i][k2-1];
			loc_mtrx[i][k2-1] = temp;
		}
		*mtrx = loc_mtrx;
	}
	else
		cout << "Error.";
}














