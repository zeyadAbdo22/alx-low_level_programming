#include "main.h"

/**
 * _memcpy -> a function that fills memory with a constant byte.
 *
 * @dest: pointer to copy to.
 * @src: pointer to copy from.
 * @n: number of bytes to copy.
 *
 * Return: a pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}
