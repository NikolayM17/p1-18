''' Func15. ������� ������� DigitN(K, N) ������ ����,
������������ N-� ����� ������ �������������� ����� K 
(����� � ����� ���������� ������ ������, ������ ����� 
����� ����� 1). ���� ���������� ���� � ����� K ������ N,
�� ������� ���������� ?1. ��� ������� �� ���� ������ 
����� ������������� ����� K1, K2, �, K5 ������� 
������� DigitN � ���������� N, ������������ �� 1 �� 5.  '''
def DigitCount(k):
    times = 0
    while (k > 0):
        k = k // 10
        times += 1
    return times

def DigitN(k, n):
  count = DigitCount(k)
  if n > count:
    return -1
  else:
    number = k
    tmp = int
    i = count
    while i > 0:
      tmp = k % 10
      k //= 10
      i -= 1
      if i == n - 1:
        return tmp

c = 5
while c > 0:
  k = int(input())
  n = int(input())
  print(DigitN(k, n))
  c -= 1