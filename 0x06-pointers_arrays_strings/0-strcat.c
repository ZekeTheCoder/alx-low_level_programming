#include "main.h"

/**
 * _strcat - concatenates two strings.
 * appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 *
 * @dest: destination.
 * @src: source.
 *
 * Return:  a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int count1 = 0;
	int count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count1++;
	}

	while (count2 >= 0)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
