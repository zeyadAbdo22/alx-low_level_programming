#include<stdio.h>
#include "main.h"
/**
 * set_bit -> function that sets the value of a bit to  given index.
 *
 * @n: int to set bit in,
 * @index: int.
 *
 * Return: void.
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)
		return (-1);

	*n |= (1 << index);

	return (1);
}
