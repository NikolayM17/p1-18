/* Text4. ��� ��������� ����. ������� ���������� ������������ � ��� �������� � ����� (������� ������ ����� EOLN
� ����� ����� EOF ��� �������� ���������� �������� �� ���������). */
/* �. �. �������. ����������� �������� �� ����������������. �������: ��������� �.�., 10.04.2020 */
#include <stdio.h>
#include <string.h>
#define MAXLEN 200
int main()
{
	int c;
	int nchars = 0, nlines = 0;
	char fname[MAXLEN];
	fgets(fname, MAXLEN+1, stdin);
	int last = strlen(fname)-1;
	/* ���� ����� fgets, ������ \n ����� �������� � ������, �� ����� � �� ��������,
	� ����������� �� MAXLEN :) */

	if (fname[last] == '\n')
        fname[last] = '\0';

	FILE *f = fopen(fname, "r");
	int i = 0;
	while ((c = fgetc(f)) != EOF) {
		nchars++;
		if (c == '\n')
			nlines++;
	}
	nchars -= nlines;
	fclose(f);
	printf("chars = %d, lines = %d\n", nchars, nlines);
	return 0;
}
