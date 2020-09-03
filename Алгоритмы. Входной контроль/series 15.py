''' Series15∞. ƒано целое число K и набор ненулевых целых чисел;
признак его завершени€ Ч число 0. ¬ывести номер первого числа в наборе, большего K.
≈сли таких чисел нет, то вывести 0. '''


k = int(input())

k_rem = k

number = 1

while number != 0:

    number = int(input())

    if k < number:

        print (number)

        k = number

        break

if k_rem == k:

    print(0)