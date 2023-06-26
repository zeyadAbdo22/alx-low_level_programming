#include "main.h"
#include <stdio.h>

/**
 * print_array-> a function that prints n elements of an array of integers
 *
 * @a : a is pointer to integer parameter
 * @n: n is the number of element to print
 *
 * Return: void (no return)
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
