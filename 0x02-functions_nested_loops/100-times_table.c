#include "main.h"

/**
 * print_times_table -> function that prints the n times table,starting with 0.
 *
 * @n: n is an integer argument
 *
 * Return: void (no return)
 */

void print_times_table(int n)
{
	int ii, j, er;

	if (n <= 15 && n >= 0)
	{
		for (ii = 0; ii <= n; ii++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				er = ii * j;
				_putchar(',');
				_putchar(' ');
				(er > 99) ? _putchar('0' + er / 100) : _putchar(' ');
				(er > 9) ? _putchar('0' + er / 10 % 10) : _putchar(' ');
				_putchar('0' + er % 10);
			}
			_putchar('\n');
		}
	}
}
