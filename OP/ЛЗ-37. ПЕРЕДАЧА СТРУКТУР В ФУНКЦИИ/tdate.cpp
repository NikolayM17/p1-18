/* Param59 */
#include "tdate.h"

using namespace std;

bool tdate::leap_year() {
    /* ���������� ���? */
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
