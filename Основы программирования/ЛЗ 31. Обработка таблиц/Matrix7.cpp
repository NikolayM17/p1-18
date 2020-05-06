/* Programming Taskbook. ����������� �������� �� ����������������
(c)  �. �. ������� (����� ����������� �����������), 1998�2020 */
// ��������� ������� (�������)
// http://ptaskbook.com/ru/tasks/matrix.php
/* ��������� ������� (�������): ����� ���������
/* Matrix7. ���� ������� ������� M * N � ����� ����� K (0<= K < M).
������� �������� K-� ������ ������ �������. */
/* �������. ��������� �.�., ����� ����, 06.05.2020 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	const size_t MAXN = 100;
	size_t m, n;
	size_t k;
	cin >> m >> n;
	cin >> k;

	int mat[MAXN][MAXN];
	for (size_t i = 0; i < m; i++)
		for (size_t j = 0; j < n; j++)
			cin >> mat[i][j];

    for (size_t j = 0; j < n; j++) {
        cout << mat[k][j];
        if (j < n - 1)
            cout << "\t";
    }
    cout << endl;
	return 0;
}
