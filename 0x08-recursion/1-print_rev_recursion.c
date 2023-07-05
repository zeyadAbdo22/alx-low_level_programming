#include "main.h"

/**
 * _print_rev_recursion -> Prints a string in a reverse
 * @s: string to reverse.
 *
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
