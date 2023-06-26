#include "main.h"
/**
 * puts_half->  a function that prints half of a string
 *
 * @str: str is a pointer to string parameter
 *
 * Return: void (no return)
 */

void puts_half(char *str)
{
	int a, c = 0, n = 0;

	for (a = 0; *(str + a) != 0; a++)
		c++;

	if (c % 2 == 0)
		n = c / 2;
	else
		n = (c - 1) / 2 + 1;

	for (a = n; *(str + a) != 0; a++)
		_putchar(*(str + a));

	_putchar('\n');
}
