#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a, b;
	puts("Введите длину прямоугольника");
	scanf("%d", &a);
	puts("Введите ширину прямоугольника");
	scanf("%d", &b);
	printf("Площадь прямоугольника равна %d\n", a * b);
	printf("Периметр прямоугольника равен %d", a + b + a + b);
}