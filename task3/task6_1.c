//������� 6.1
// ������� ����������� � ������� ����� FOR
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
	printf("������� ����������� � ������� ����� FOR\n"); 
	printf("����:\n");
	printf("1. ������� 1\n");
	printf("2. ������� 2\n");
	printf("3. ������� 3\n");
	printf("4. ������� 4\n");
	printf("5. ������� 5\n");
	printf("6. ����� �� ���������\n");
	do
	{
        printf("�������� �������: ");
	switch (_getch())
	{
	case '1':
	{
	printf("������� 1\n");
	int n = 0;
	float a = 0.0;
	printf("������� ����� n = ");
	scanf("%d", &n);
	a = summ(n);
	printf("���������: %.4f\n", a);
	s = 1;
	break;
	}
	case '2':
	{
	printf("������� 2\n");
	float a = 0.0;
	float eps = 0.0;
	printf("������� �������� eps = ");
	scanf("%f", &eps);
	a = summ2(eps);
	printf("���������: %.4f\n", a);
	s = 2;
	break;
	}
	case '3':
	{
	printf("������� 3\n");
	int n = 0;
	int k = 0;
	printf("������� ����� n = ");
	scanf("%d", &n);
	printf("������� ����� k = ");
	scanf("%d", &k);
	print(n, k);
	s = 3;
	break;
	}
	case '4':
	{
	printf("������� 4\n");
	int i = 0;
	float eps = 0.0;
	printf("������� �������� eps = ");
	scanf("%f", &eps);
	i = findFirstElement(eps);
	printf("���������: %d\n", i);
	s = 4;
	break;
	}
	case '5':
	{
	printf("������� 5\n");
	int i = 0;
	float eps = 0.0;
	printf("������� �������� eps = ");
	scanf("%f", &eps);
	i = findFirstNegativeElement(eps);
	printf("���������: %d\n", i);
	s = 5;
	break;
	}
	case '6':
	{
	printf("\n");
	printf("�� ����� �� ���������\n");
	s = 6;
	break;
	}
	}
	} while (s != 6);
	system("pause");
	return 0;
}
	