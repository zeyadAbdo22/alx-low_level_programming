#include "variadic_functions.h"

/**
 * print_numbers - print a given number of integers
 *                 separated  given separator
 *
 * @separator: the separator string used to separate the numbers
 * @n: the number of integer to print
 * @...: the list of integer to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
