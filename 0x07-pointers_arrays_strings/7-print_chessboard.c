#include "main.h"

/**
 * print_chessboard - prints the chessboard pattern
 * using a 2D array 'a' to represent the board.
 * The pattern will have 8 rows and 8 columns.
 *
 * @a: array.
 *
 * Return: no return.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, row = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			row = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - row]);
	}
	_putchar('\n');
}
