#include "main.h"

/**
 * _strstr - locates a substring.
 * finds the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared.
 * Also Handles empty needle.
 *
 * @haystack: string.
 * @needle: substring.
 *
 * Return: pointer to the beginning of located substring, or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *string;
	char *substring;

	while (*haystack != '\0')
	{
		string = haystack;
		substring = needle;

		while (*haystack != '\0' && *substring != '\0' && *haystack == *substring)
		{
			haystack++;
			substring++;
		}

		if (*substring == '\0')
		{
			return (string);
		}

		haystack = string + 1;
	}

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	return (0);
}
