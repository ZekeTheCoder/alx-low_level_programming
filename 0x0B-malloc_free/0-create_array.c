#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array.
 * @c: character to initialize it.
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *charArray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	charArray = malloc(sizeof(c) * size);

	if (charArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		charArray[i] = c;

	return (charArray);
}
