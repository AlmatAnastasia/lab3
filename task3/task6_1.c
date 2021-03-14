//Задание 6.1
// Функции реализованы с помощью цикла FOR
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h> 
#include <conio.h>
#include "func.h"

int main(void)
{
	int s = 0;
	setlocale(LC_CTYPE, "rus");
	printf("Функции реализованы с помощью цикла FOR\n"); 
	printf("Меню:\n");
	printf("1. Задание 1\n");
	printf("2. Задание 2\n");
	printf("3. Задание 3\n");
	printf("4. Задание 4\n");
	printf("5. Задание 5\n");
	printf("6. Выход из программы\n");
	do
	{
        printf("Выберите команду: ");
	switch (_getch())
	{
	case '1':
	{
	printf("Задание 1\n");
	int n = 0;
	float a = 0.0;
	printf("Введите число n = ");
	scanf("%d", &n);
	a = summ(n);
	printf("Результат: %.4f\n", a);
	s = 1;
	break;
	}
	case '2':
	{
	printf("Задание 2\n");
	float a = 0.0;
	float eps = 0.0;
	printf("Введите точность eps = ");
	scanf("%f", &eps);
	a = summ2(eps);
	printf("Результат: %.4f\n", a);
	s = 2;
	break;
	}
	case '3':
	{
	printf("Задание 3\n");
	int n = 0;
	int k = 0;
	printf("Введите число n = ");
	scanf("%d", &n);
	printf("Введите число k = ");
	scanf("%d", &k);
	print(n, k);
	s = 3;
	break;
	}
	case '4':
	{
	printf("Задание 4\n");
	int i = 0;
	float eps = 0.0;
	printf("Введите точность eps = ");
	scanf("%f", &eps);
	i = findFirstElement(eps);
	printf("Результат: %d\n", i);
	s = 4;
	break;
	}
	case '5':
	{
	printf("Задание 5\n");
	int i = 0;
	float eps = 0.0;
	printf("Введите точность eps = ");
	scanf("%f", &eps);
	i = findFirstNegativeElement(eps);
	printf("Результат: %d\n", i);
	s = 5;
	break;
	}
	case '6':
	{
	printf("\n");
	printf("Вы вышли из программы\n");
	s = 6;
	break;
	}
	}
	} while (s != 6);
	system("pause");
	return 0;
}
	