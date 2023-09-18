#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @str: input string.
 *
 * Return: no return.
 */

void puts_half(char *str)
{
	int n;
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 1)
		n = count / 2;
	else
		n = (count - 1) / 2;

	for (n++; n < count; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
