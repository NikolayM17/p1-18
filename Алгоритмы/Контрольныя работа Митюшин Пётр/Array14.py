#Array14
#Дан массив A размера N. Вывести вначале его элементы с четными номерами (в порядке возрастания номеров),
#а затем — элементы с нечетными номерами (также в порядке возрастания номеров):
a = []
n = int(input())
for i in range(n):
    a.append(int(input()))

for i in range(n):
    if (i % 2 == 0):
        print(a[i])

for i in range(n):
    if (i % 2 != 0):
        print(a[i])
        
