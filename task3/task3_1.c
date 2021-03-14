//Задание 3.1
// Функция реализована с помощью цикла FOR
#include <stdio.h>
#include <math.h>
#include "func.h"

void print(int n, int k)
{
    double a = 0.0;
    int k1 = k;
    for (int i= 0; i <= (n - 1); ++i)
    {
    a = function(i);
    if ((i+1) == k)
    {
    k+=k1;
    continue;
    }
    else   
    {
	printf("Result: %f\n", a);
    }
    }
    
}
