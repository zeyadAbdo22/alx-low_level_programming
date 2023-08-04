#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary number to an unsigned int.
 *
 * @b: char string.
 *
 * Return: converted decimal number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total_len, power_len;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power_len = 1, total_len = 0, len--; len >= 0; len--, power_len *= 2)
	{
		if (b[len] == '1')
			total_len += power_len;
	}

	return (total_len);
}
