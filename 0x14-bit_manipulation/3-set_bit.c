#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: unsigned long int pointer.
 * @index: index starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
	{
		return (-1);
	}

	mask = 1 << index;
	*n = (*n | mask);

	return (1);
}
