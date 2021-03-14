//Задание 2.3
// Функция реализована с помощью цикла DO...WHILE
#include <stdio.h>
#include <math.h>
#include "func.h"

double summ2(double eps)
{
    double a = 0.0;
    int i = 0;
    if (eps != 0)
    {
    do 
    {
    a = a + function(i); 
    ++i;
    } while (fabs(a)<=eps);
    }
    return a;
}
