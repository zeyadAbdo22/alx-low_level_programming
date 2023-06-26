#include "main.h"
/**
 * puts2-> a function to print every other character of a string
 *
 * @str: str is a pointer to string parameter
 *
 * Return: void (no return)
 */

void puts2(char *str)
{
	int a;

	for (a = 0; *(str + a) != 0; a++)
	{
		if (a % 2 == 0)
			_putchar(*(str + a));
	}
	_putchar('\n');
}
