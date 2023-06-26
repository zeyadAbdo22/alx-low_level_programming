#include "main.h"
/**
 * print_rev-> a function to print string in reverse order
 *
 * @s: s is a pointer to string parameter
 *
 * Return: void (no return)
 */

void print_rev(char *s)
{
	int a, c = 0;

	for (a = 0; *(s + a) != 0; a++)
		c++;

	for (a = c - 1; a >= 0; a--)
		_putchar(*(s + a));
	_putchar('\n');
}
