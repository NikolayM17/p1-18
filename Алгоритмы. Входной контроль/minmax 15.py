''' Minmax15. Даны числа B, C (0 < B < C) и набор из десяти чисел.
Вывести максимальный из элементов набора, содержащихся в интервале (B, C), и его номер.
Если требуемые числа в наборе отсутствуют, то дважды вывести 0. '''


b = int(input())

c = int(input())

b -= 1

b_rem = b

times = 10

if c <= times:

    if b < c:

        a = []

        bcMAX = []

        for i in range (times):

            number = int(input())

            a.append(number)

        while b < c:

            bcMAX.append(a[b])

            b += 1

        print(max(bcMAX))

        while b_rem <= b:

            if a[b_rem] == max(bcMAX):

                print(b_rem + 1)

            b_rem += 1

    else:

        print(0, 0)

else:

    print(0, 0)