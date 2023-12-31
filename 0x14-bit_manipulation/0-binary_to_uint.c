#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: binary.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;
	int base = 1;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	for (len--; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			result += base;
		}

		base *= 2;
	}

	return (result);
}
