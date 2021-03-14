//Задание 2.2
// Функция реализована с помощью цикла WHILE
#include <stdio.h>
#include <math.h>
#include "func.h"

double summ2(double eps)
{
    double a = 0.0;
    int i = 0;
    while (fabs(a)<=eps)
    {
    a = a + function(i); 
    ++i;
    }
    
    return a;
}
