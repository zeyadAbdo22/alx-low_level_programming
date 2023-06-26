#include "main.h"
/**
 * rev_string-> a function to reverse string
 *
 * @s: s is a pointer to string
 *
 * Return: void (no return)
 */

void rev_string(char *s)
{
	int a, c = 0;
	char tmp;

	for (a = 0; *(s + a) != 0; a++)
		c++;

	for (a = 0; a < c / 2; a++)
	{
		tmp = *(s + a);
		*(s + a) = *(s + (c - a - 1));
		*(s + (c - a - 1)) = tmp;
	}
}
