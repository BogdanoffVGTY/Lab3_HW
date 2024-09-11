#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a = 3, b = 5;
	puts("_________________________");
	puts("| a * b | a + b | a - b |");
	puts("_________________________");
	puts("¬ведите первое число");
	scanf("%d",&a);
	puts("¬ведите второе число");
	scanf("%d", &b);
	printf("______________________________________________\n");
	printf("|     a * b    |    a + b     |    a - b     |\n");
	printf("______________________________________________\n");
	printf("| %6.d * %-5.d | %6.d + %-5.d | %6.d - %-5.d |\n", a, b, a, b, a, b);
	printf("______________________________________________\n");
	printf("|     % -6.d   |    % -6.d    |     %-6.d    |\n", a*b, a+b, a-b);
	printf("______________________________________________\n");
}