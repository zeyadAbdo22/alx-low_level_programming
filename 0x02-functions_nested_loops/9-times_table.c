#include "main.h"

/**
 * times_table ->  a function that prints the nine time tables,
 *
 * Return: void (no return)
 */

void times_table(void)
{
	int ii, j, er;

	for (ii = 0; ii <= 9; ii++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			er = ii * j;
			_putchar(',');
			_putchar(' ');
			(er / 10) ? _putchar('0' + er / 10) : _putchar(' ');
			_putchar('0' + er % 10);
		}
		_putchar('\n');
	}
}
