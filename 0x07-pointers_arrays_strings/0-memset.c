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
	unsigned int x = 0;

	for (i = 0; n > 0 ; i++, n--)
	{
		s[x] = b;
	}
	return (s);
}
