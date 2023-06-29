#include "main.h"

/**
 * leet -> a function that encodes a string into 1337.
 *
 * @s: s is a pointer to char parameter
 *
 * Return: a pointer to the resulting string s.
 */

char *leet(char *s)
{
	int x, y;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; l[y]; y++)
		{
			if (s[x] == l[y])
				s[x] = e[y];
		}
	}
	return (s);
}
