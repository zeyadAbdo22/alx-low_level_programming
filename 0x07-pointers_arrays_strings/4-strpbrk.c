#include "main.h"

/**
 * _strpbrk -> a function that searches a string for any of a set of bytes.
 *
 * @s: string to get its match.
 * @accept: string.
 *
 * Return: int.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return (0);
}
