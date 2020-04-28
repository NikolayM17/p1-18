#include <stdio.h>

//===========================================================
// Это main() - начало выполнения программы
//-----------------------------------------------------------
int main()
{
    //------------------------------------------------------------
    // Объявление переменных.
    //------------------------------------------------------------
    /* 
     Переменная digit - для цифр.
     Переменная number - для числа
     Обе переменные имеют тип char
     В зависимости от формата шаблона scanf() и printf()
     воспринимают переменные либо как символ, либо
     как число 
    */
    char digit;
    char number;
    //------------------------------------------------------------

    //------------------------------------------------------------

    //  Получим с консоли цифру (цифра - это символ)

   scanf("%c", &digit);     //%с - для сиволов

    //------------------------------------------------------------

    // Распечатаем сивольное значение digit
    // \n - тоже символ (перенос строки)
    printf("symbol digit: %c\n", digit);

    // Распечатаем численное значение digit
    printf("number digit: %d\n", digit);

    // Получим из символа digit число, соответствующее данной цифре
    /*
      Одиночные кавычки обозначают символ. '0' - символ, 0 - число
      Коды цифр в таблице кодов установлены последовательно: '0', '1', '2',...'9'
      В ASCII код '0' - 48, '1' - 49, ...
      Язык С преобразует символы в числа в выражениях.
    */
    number = digit - '0';
    // Напечатаем численное значение number
    printf("number: %d\n", number);

    return 0;
}

/**
Проверил исходник: Груздев Роман, П1-18

Example:

Input:
9

Output:
symbol digit: 9
number digit: 57
number: 9


*/