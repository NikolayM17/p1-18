''' Series15�. ���� ����� ����� K � ����� ��������� ����� �����;
������� ��� ���������� � ����� 0. ������� ����� ������� ����� � ������, �������� K.
���� ����� ����� ���, �� ������� 0. '''


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