#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to to a newly allocated space in memory, which contains s1.
 * followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int index;
	unsigned int length = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		length++;

	concat = malloc(sizeof(char) * (length + 1));

	if (concat == NULL)
		return (NULL);

	length = 0;

	for (index = 0; s1[index]; index++)
		concat[length++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[length++] = s2[index];

	concat[length] = '\0';

	return (concat);
}
