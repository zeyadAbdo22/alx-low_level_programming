#include "main.h"

/**
 * print_square ->  a function that prints a square
 *
 * @size: size is an integer argument
 *
 * Return: void (no return)
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
