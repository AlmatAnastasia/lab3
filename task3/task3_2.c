//Задание 3.2
// Функция реализована с помощью цикла WHILE
#include <stdio.h>
#include <math.h>
#include "func.h"

void print(int n, int k)
{
    double a = 0.0;
    int i = 0;
    int k1 = k;
    while ( i <= (n - 1))
    {
    a = function(i);
    if ((i+1) == k)
    {
    k+=k1;
    ++i;
    continue;
    }
    else   
    {
	printf("Result: %f\n", a);
    }
    ++i;
    }

}
