#include "main.h"

/**
 * _strncat - concatenates two strings.
 * The _strncat function is similar to the _strcat function,
 * except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0;
	int count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count1++;
	}

	while (count2 < n)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
