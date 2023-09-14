#include "main.h"

/**
 * print_line - draws a straight line n times in the terminal.
 *
 * @n: the number of times the character _ should be printed.
 *
 * Return: no return.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
