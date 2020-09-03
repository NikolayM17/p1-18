'''For15°. Дано вещественное число A и целое число N (> 0). Найти A в степени N:

AN = A·A· … ·A

(числа A перемножаются N раз).   '''

a = float(input())
n = int(input())
times = 1
i = 0
while i < n:
    i += 1
    times *= a
print(times)