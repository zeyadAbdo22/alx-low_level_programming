#include "function_pointers.h"

/**
 * array_iterator - executes  function given as  parameter
 *                  on each an element of  array
 * @array: array to iterate through
 * @size: size of the array
 * @action: pointer to function to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
