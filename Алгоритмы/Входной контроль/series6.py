'''
Series6. Дано целое число N и набор из N положительных вещественных чисел.
Вывести в том же порядке дробные части всех чисел из данного
набора (как вещественные числа с нулевой целой частью),
а также произведение всех дробных частей.
'''

n = int (input())
poww = 1
for i in range(n):
    f = float(input())
    f %= 1
    print(f)
    poww *= f
print(poww)
