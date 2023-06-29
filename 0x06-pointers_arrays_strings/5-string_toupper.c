#include "main.h"

/**
 * string_toupper ->
 * a function that changes all lowercase letters of a string to uppercase.
 *
 * @s: s is a pointer to char parameter
 *
 * Return: a pointer to the resulting string s.
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if (s[x] >= 'a' && x <= 'z')
			s[x] -= 32;
	}
	return (s);
}
