//Задание 4.2
// Функция реализована с помощью цикла WHILE
#include <stdio.h>
#include <math.h>
#include "func.h"

int findFirstElement(double eps)
{
    double a = 0.0;
    int i = 0;
    int i1 = 0;
    _Bool flag = 1;
    while (flag == 1)
    {
    a = function(i);
    if (fabs(a) <= eps)
    {
    i1 = i;
    flag = 0;
    break;
    }
    else
    ++i;
    }
    return i1;
}
