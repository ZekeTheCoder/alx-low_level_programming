#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated.
 * if NULL is passed, treat it as an empty string
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return:  pointer which points to the concatenated string.
 * and NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatstr;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	concatstr = malloc(sizeof(char) * (i + j + 1));

	if (concatstr == NULL)
	{
		free(concatstr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		concatstr[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		concatstr[k] = s2[j];

	concatstr[k] = '\0';

	return (concatstr);
}
