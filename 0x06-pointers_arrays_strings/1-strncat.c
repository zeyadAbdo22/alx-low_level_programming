#include "main.h"

/**
 * _strcat -> a function that concatenates two strings.
 *
 * @dest: dest is a pointer to char parameter
 * @src: src is a pointer to char parameter
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y = 0;

	for (x = 0; dest[x]; x++)
		;
	for (; src[y]; x++)
	{
		dest[x] = src[y];
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
