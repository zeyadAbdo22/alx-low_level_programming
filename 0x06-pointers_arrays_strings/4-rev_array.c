#include "main.h"

/**
 * reverse_array -> function that reverses the content of an array of integers.
 *
 * @a: a is a pointer to char parameter
 * @n: n is the number of elements of the array
 *
 * Return: void (no return)
 */

void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}
}
