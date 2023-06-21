#include "main.h"
/**
 * print_sign -> Determines whether the number is positive or negative or zero.
 *
 * @n: n is an integer argument
 *
 * Return:
 * -> 1 if n is positive.
 * -> 0 if n is zero.
 * -> -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
