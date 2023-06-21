#include<stdio.h>

/**
 *numlength -returns the lenght of string
 *
 * @num: operand number
 *
 * Return: number of digits
 */

int numLength(int n)
{
	int l = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		l += 1;
	}
	return (l);
}
