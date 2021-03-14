//Задание 4.3
// Функция реализована с помощью цикла DO...WHILE
#include <stdio.h>
#include <math.h>
#include "func.h"

int findFirstElement(double eps)
{
    double a = 0.0;
    int i = 0;
    int i1 = 0;
    _Bool flag = 1;
    if (eps != 0)
    {
    do
    {
    a = function(i);
    if (fabs(a) <= eps)
    {
    i1 = i;
    flag = 0;
    break;
    }
    ++i;
    } while (flag == 1);
    }
    return i1;
}
