#include "main.h"

/**
 * print_diagonal - draws a diagonal line n times on the terminal.
 *
 * @n: n is the number of times the character \ should be printed.
 *
 * Return: no return.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
