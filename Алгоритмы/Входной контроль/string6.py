'''
String6. Дан символ C, изображающий цифру или букву (латинскую или русскую).
Если C изображает цифру, то вывести строку «digit»,
если латинскую букву — вывести строку «lat», если русскую — вывести строку «rus».
'''

c = input()
if (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z'):
    print("eng")
elif (c >= "0" and c <= "9"):
  print("digit")
elif (c >= "а" and c <= "я") or (c >= "А" and c <= "Я"):
  print("rus")
