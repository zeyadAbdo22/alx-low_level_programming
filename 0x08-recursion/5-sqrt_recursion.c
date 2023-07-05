#include "main.h"

/**
* _sqrt_recursion -> A  function  returns the natural square root of number.
*
* @n: n is an int argument.
*
* Return: int
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}

/**
 * _sqrt -> returns the sqrt number
 *
 * @l: l is an int argument
 * @n: n is an int argument
 *
 * Return: int
 */

int _sqrt(int l, int n)
{
	if (n < 0)
		return (-1);
	else if (l * l > n)
		return (-1);
	else if (l * l == n)
		return (l);
	else
		return (_sqrt(l + 1, n));
}
