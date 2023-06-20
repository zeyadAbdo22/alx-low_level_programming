#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char su[] = "_putchar";
	int x;

	for (x = 0; x <= 7; x++)
	{
		_putchar(su[x]);
	}
	_putchar('\n');
	return (0);
}
