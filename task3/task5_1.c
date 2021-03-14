//Задание 5.1
// Функция реализована с помощью цикла FOR
#include <stdio.h>
#include <math.h>
#include "func.h"

int findFirstNegativeElement(double eps)
{
    double a = 0.0;
    int i1 = 0;
    _Bool flag = 1;
    for (int i=0; flag == 1; ++i)
    {
    a = function(i);
    if (fabs(a) <= eps && a < 0)
    {
    i1 = i;
    flag = 0;
    return i1;
    }
    else
    continue;
    }
}
