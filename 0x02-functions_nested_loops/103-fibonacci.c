#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int sum = 0;
	int x = 0;

	while (1)
	{
		x = a + b;
		if (x % 2 == 0)
			sum += x;
		a = b;
		b = x;
		if (x > 4000000)
			break;
	}
	printf("%d\n", sum);
	return (0);
}
