#include "main.h"

/**
 * _strlen-> a method to calculate the length of string
 *
 * @s: s is a pointer to char parameter
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a, count = 0;

	for (a = 0; *(s + a) != 0; a++)
		count++;
	return (count);
}
