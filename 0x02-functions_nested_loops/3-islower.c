#include "main.h"

/**
 * _islower ->
 * is a function to check whether the character is lower or upper
 *
 * @c: c is an integer parameter
 * Return: void(no return)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
