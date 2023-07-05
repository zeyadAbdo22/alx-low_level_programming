#include "main.h"

/**
 * factorial->  function that returns the factorial about  given number
 *
 * @n: n is a int argument
 *
 * Return: int
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
