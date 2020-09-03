#   If15. Даны три числа. Найти сумму двух наибольших из них.


a = int(input())

b = int(input())

c = int(input())

sum = 0

sum = a + b + c

sum -= min(a, b, c)

print(sum)