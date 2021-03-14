//Задание 1.2
// Функция реализована с помощью цикла WHILE
#include <stdio.h>
#include <math.h>
#include "func.h"

double summ(int n)
{
    double a = 0.0;
    int i = 0;
    while (i <= (n-1))
    {
    a = a + function(i); 
    i++;
    }
    
    return a;
}
