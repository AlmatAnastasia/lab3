//Задание 2.1
// Функция реализована с помощью цикла FOR
#include <stdio.h>
#include <math.h>
#include "func.h"

double summ2(double eps)
{
    double a = 0.0;
    for (int i=0; fabs(a)<=eps; ++i)
    {
    a = a + function(i); 
    }
    
    return a;
}
