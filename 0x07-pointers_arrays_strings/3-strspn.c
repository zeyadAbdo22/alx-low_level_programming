#include "main.h"

/**
 * _strspn -> a function that gets the length of a prefix substring.
 *
 * @s: string to get its length.
 * @accept: string.
 *
 * Return: int.
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; *(s + y); y++)
	{
		for (x = 0; *(accept + x); x++)
		{
			if (*(s + y) == *(accept + x))
				break;
		}
	if (*(accept + x) == '\0')
		break;
	}
	return (y);
}
