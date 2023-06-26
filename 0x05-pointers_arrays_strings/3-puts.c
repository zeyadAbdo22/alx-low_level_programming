#include "main.h"
/**
 * _puts-> a function to a string, followed by a new line
 *
 * @str: str is a pointer to string prameter
 *
 * Return: void (no return)
 */

void _puts(char *str)
{
	int a;

	for (a = 0; *(str + a) != 0; a++)
		_putchar(*(str + a));
	_putchar('\n');
}
