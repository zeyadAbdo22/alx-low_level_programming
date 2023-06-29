#include "main.h"

/**
 * _strncpy -> a function that copies a string.
 *
 * @dest: dest is a pointer to char parameter
 * @src: src is a pointer to char parameter
 * @n: n is an integer argument
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x]; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
