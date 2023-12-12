#include "main.h"

/**
 * _strcmp - compares two strings.
 *  work exactly like strcmp
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: difference between strings,
 * 0 if s1 and s2 are equal.
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s1 == *s2)
	{
		if ((*(s1) == '\0') && (*(s2) == '\0'))
			break;

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
