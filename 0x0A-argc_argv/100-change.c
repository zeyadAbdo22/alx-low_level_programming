#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, n;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; n; i++)
	{
		for (j = 0; c[j]; j++)
		{
			if (n >= c[j])
			{
				n -= c[j];
				break;
			}
		}
	}
	printf("%d\n", i);
	return (0);
}
