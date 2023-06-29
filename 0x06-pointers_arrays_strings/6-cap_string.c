#include "main.h"

/**
 * cap_string -> a function that capitalizes all words of a string.
 *
 * @s: s is a pointer to char parameter
 *
 * Return: a pointer to the resulting string s.
 */

char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		if ((s[x] == ' ' || s[x] == '\t' || s[x] == '\n' || s[x] == ','
				 || s[x] == ';' || s[x] == '.' || s[x] == '!'
				 || s[x] == '?' || s[x] == '"' || s[x] == '('
				 || s[x] == ')' || s[x] == '{' || s[x] == '}')
				 && (s[x + 1] >= 'a' && s[x + 1] <= 'z'))
			s[x + 1] -= 32;
	}
	return (s);
}
