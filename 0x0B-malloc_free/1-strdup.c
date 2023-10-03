#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str:  input string to duplicate.
 *
 * Return: pointer to the duplicated string and NULL if str = NULL
 * or insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *dupstr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dupstr = (char *)malloc(sizeof(char) * (i + 1));

	if (dupstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dupstr[j] = str[j];

	return (dupstr);
}
