#include "main.h"

/**
 * _strchr - locates a character in a string.
 * iterates through the string using a for loop, checking each character.
 * If it finds a match with the target character c,
 * it returns a pointer to the location in the string
 * where the character was found.
 * If the character is not found in the string,
 * it returns '\0' to indicate that no match was found.
 *
 * @s: string.
 * @c: character.
 *
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
