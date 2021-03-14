//Задание 1.1
// Функция реализована с помощью цикла FOR
#include <stdio.h>
#include <math.h>
#include "func.h"

double summ(int n)
{
    double a = 0.0;
    for (int i=0; i<=(n-1); ++i)
    {
    a = a + function(i); 
    }
    
    return a;
}
