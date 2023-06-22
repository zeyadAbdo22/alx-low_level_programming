#include "main.h"

/**
 * print_triangle -> function that prints a triangle followed by a new line.
 *
 * @size: size and integer parameter.
 *
 * Return: void(no return).
 */

void print_triangle(int size)
{
	int r, h, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
