'''For15�. ���� ������������ ����� A � ����� ����� N (> 0). ����� A � ������� N:

AN = A�A� � �A

(����� A ������������� N ���).   '''

a = float(input())
n = int(input())
times = 1
i = 0
while i < n:
    i += 1
    times *= a
print(times)