#include "main.h"

/**
 * print_chessboard -> a function that prints the chessboard.
 *
 * @a: an array of chess.
 *
 * Return: void (No Return).
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
