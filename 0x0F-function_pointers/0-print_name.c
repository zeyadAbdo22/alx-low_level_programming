#include "function_pointers.h"

/**
 * print_name - prints  name
 * @name: name to print
 * @f: function pointer that takes a char argument and returns void
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
