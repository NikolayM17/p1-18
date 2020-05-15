#include <iostream>

/**
М. Э. Абрамян
Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R (R — вещественное).
С помощью этой функции найти площади трех кругов с данными радиусами.
Площадь круга радиуса R вычисляется по формуле S = π·R2.
В качестве значения π использовать 3.14.
Митюшин Пётр
*/

double CircleS(double R)
{
    return 3.14 * (R * R);
}

int main()
{
    double r1, r2, r3;
    std::cin >> r1 >> r2 >> r3;
    std::cout << CircleS(r1) << ' ' << CircleS(r2) << ' ' << CircleS(r3);
    return 0;
}
