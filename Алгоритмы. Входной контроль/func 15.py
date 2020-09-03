''' Func15. Описать функцию DigitN(K, N) целого типа,
возвращающую N-ю цифру целого положительного числа K 
(цифры в числе нумеруются справа налево, правая цифра 
имеет номер 1). Если количество цифр в числе K меньше N,
то функция возвращает ?1. Для каждого из пяти данных 
целых положительных чисел K1, K2, …, K5 вызвать 
функцию DigitN с параметром N, изменяющимся от 1 до 5.  '''
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