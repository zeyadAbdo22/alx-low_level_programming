#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 49, y = 48;

	for (; y < 57; y++)
	{
		for (; x <= 57; x++)
		{
			putchar(y);
			putchar(x);
			if (x == 57 && y == 56)
				continue;
			putchar(',');
			putchar(' ');
		}
		x = y + 2;
	}
	putchar('\n');
	return (0);
}
