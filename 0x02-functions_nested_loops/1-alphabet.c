#include "main.h"

/**
 * print_alphabet ->
 * a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void (no return)
 */
void print_alphabet(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
