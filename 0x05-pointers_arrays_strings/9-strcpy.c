#include "main.h"
/**
 * _strcpy-> a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: dest is a pointer to string parameter
 * @src: src is a pointer to string parameter
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, c = 0;

	for (a = 0; *(src + a) != 0; a++)
		c++;
	for (a = 0; a < c; a++)
		*(dest + a) = *(src + a);
	*(dest + a) = '\0';
	return (dest);
}
