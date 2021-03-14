//Задание 3.3
// Функция реализована с помощью цикла DO...WHILE
#include <stdio.h>
#include <math.h>
#include "func.h"

void print(int n, int k)
{
    double a = 0.0;
    int i = 0;
    int k1 = k;
    if (n != 0)
    {
    do
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
    } while ( i <= (n - 1));
    }
}