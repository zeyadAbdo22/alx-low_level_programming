#include "main.h"

/**
 * _strstr -> a function that searches a string for any of a set of bytes.
 *
 * @haystack: a string to get the substring from.
 * @needle: substring.
 *
 * Return: a pointer to the beginning of the located substring,
 */
char *_strstr(char *haystack, char *needle)
{
	char *x, *p;

	while (*haystack != '\0')
	{
		x = haystack;
		p = needle;

		while (*haystack != '\0' && *p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (*p == '\0')
			return (x);
		haystack = x + 1;
	}
	return (0);
}
