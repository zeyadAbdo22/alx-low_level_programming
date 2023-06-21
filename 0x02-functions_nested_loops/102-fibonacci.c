#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double x = 0, y = 1, a, b;

	for (b = 0; b < 50; b++)
	{
		a = x + y;
		(b == 49) ? printf("%.f", a) : printf("%.f, ", a);
		x = y;
		y = a;
	}
	putchar('\n');
	return (0);
}
