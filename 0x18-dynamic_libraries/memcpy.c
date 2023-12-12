#include "main.h"

/**
 * _memcpy - copies memory area.
 * copying one byte or element at a time from the source memory location
 * to the destination memory location.
 *
 * @dest: pointer to the destination memory area.
 * @src: pointer to the source memory area.
 * @n: the number of bytes.
 *
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
