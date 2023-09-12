#include "main.h"

/**
 * print_times_table - This function prints the n times table,starting with 0.
 *
 * @n: integer to compare
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int product = j * i;

				if (j == 0)
				{
					_putchar('0');
				} else if (product <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				} else if (product > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
			}
			_putchar('\n');
		}
	}
}
