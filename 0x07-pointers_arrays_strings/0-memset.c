#include "main.h"

/**
 * _memset -> a function that fills memory with a constant byte.
 *
 * @s: pointer to a character.
 * @b: constant byte.
 * @n: number of bytes to fill.
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < (int)n; x++)
		s[x] = b;
	return (s);
}
