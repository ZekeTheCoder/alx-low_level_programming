#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 *
 * @str: input string.
 *
 * Return: no return.
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
