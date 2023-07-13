#include "main.h"
#include <stdlib.h>
/**
 * _strdup ->
 * function that return  pointer for newly allocated space memory,
 * which contains a copy from the string given as a parameter.
 *
 * @str: string.
 *
 * Return: char *.
 */
char *_strdup(char *str)
{
	int x, size = 0;

	char *arr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	arr = malloc((size + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		*(arr + x) = *(str + x);
	}
	arr[size] = '\0';

	return (arr);
}
