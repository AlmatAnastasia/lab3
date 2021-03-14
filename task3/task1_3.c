//Задание 1.3
// Функция реализована с помощью цикла DO...WHILE
#include <stdio.h>
#include <math.h>
#include "func.h"

double summ(int n)
{
    double a = 0.0;
    int i = 0;
    if (n != 0)
    {
    do
    {
    a = a + function(i); 
    i++;
    } while (i <= (n-1));
    }
    return a;
}
