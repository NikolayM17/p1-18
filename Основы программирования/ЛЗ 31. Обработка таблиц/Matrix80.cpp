/* Programming Taskbook. ����������� �������� �� ����������������
(c)  �. �. ������� (����� ����������� �����������), 1998�2020 */
// ��������� ������� (�������)
// http://ptaskbook.com/ru/tasks/matrix.php
/* ��������� ������� (�������): ������ � �����������
Matrix80. ���� ���������� ������� A ������� M. ����� ����� ��������� �� ������� ���������,
�. �. ���������, ���������� ��������� ��������:
a[0][0], a[1][1], ..., a[m][m] */
/* �������. ��������� �.�., ����� ����, 06.05.2020 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	const size_t MAXN = 100;
	size_t m;
	cin >> m;

	int mat[MAXN][MAXN];
	for (size_t i = 0; i < m; i++)
		for (size_t j = 0; j < m; j++)
			cin >> mat[i][j];

    int sum = 0;
    for (size_t i = 0; i < m; i++)
        sum += mat[i][i];

    cout << "sum=" << sum << endl;

	return 0;
}
