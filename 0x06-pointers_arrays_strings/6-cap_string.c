#include "main.h"

/**
 * cap_string -  changes all lowercase letters of a string to uppercase.
 *
 * @s: input string.
 *
 * Return: the string.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 's' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == ' ')
		{
			i++;
			if (*(s + i) >= 's' && *(s + i) <= 'z')
			{
				*(s + i) = *(s + i) - 32;
				continue;
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}
	}
	return (s);
}
