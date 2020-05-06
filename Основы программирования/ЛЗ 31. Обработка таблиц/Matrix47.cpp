/* Programming Taskbook. ����������� �������� �� ����������������
(c)  �. �. ������� (����� ����������� �����������), 1998�2020 */
// ��������� ������� (�������)
// http://ptaskbook.com/ru/tasks/matrix.php
/* ��������� ������� (�������): ��������������
��� ���������� ������� �� �������������� ������ �� ������� ������������
��������������� ��������� �������-�������, �� ����������� ��� �������,
� ������� ���� ������� � ������������ ���������� ��������������� ������.
Matrix47. ���� ������� ������� M * N � ����� ����� K1 � K2 (0 <= K1 < K2 < M).
 �������� ������� ������ ������� � �������� K1 � K2. */
/* �������. ��������� �.�., ����� ����, 06.05.2020 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	const size_t MAXN = 100;
	size_t m, n;
	size_t k1, k2;
	cin >> m >> n;
	cin >> k1 >> k2;

	int mat[MAXN][MAXN];
	for (size_t i = 0; i < m; i++)
		for (size_t j = 0; j < n; j++)
			cin >> mat[i][j];

    if (k1 != k2) {
        int temp;
        for (size_t j = 0; j < n; j++) {
            temp = mat[k1][j];
            mat[k1][j] = mat[k2][j];
            mat[k2][j] = temp;
        }
    }

	for (size_t i = 0; i < m; i++) {
		for (size_t j = 0; j < n; j++) {
			cout << mat[i][j];
			if (j < n - 1)
				cout << "\t";
		}
		cout << endl;
	}
	return 0;
}
