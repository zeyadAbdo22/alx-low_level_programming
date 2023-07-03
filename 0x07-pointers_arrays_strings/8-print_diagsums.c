#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> a function that prints the sum of the two diagonals
 * of a square matrix.
 *
 * @a: a matrix to sum its diagonals.
 * @size: the size of the matrix
 *
 * Return: void (No Return).
 */
void print_diagsums(int *a, int size)
{
	int x, s1, s2;

	s1 = s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[x * size + x];
		s2 += a[x * size + (size - 1 - x)];
	}
	printf("%d, %d\n", s1, s2);
}
