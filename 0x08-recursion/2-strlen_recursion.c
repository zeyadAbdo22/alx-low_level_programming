#include "main.h"
/**
 * _strlen_recursion -> Gets to  the length of a string.
 *
 * @s: string.
 *
 * Return: int (length of the string).
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
