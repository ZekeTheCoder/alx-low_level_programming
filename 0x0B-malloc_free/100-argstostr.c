#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * Returns NULL if ac == 0 or av == NULL
 * Each argument should be followed by a \n in the new string
 *
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return:  pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *concstr;
	int length, i, j, index;

	if (ac == 0)
		return (NULL);

	for (length = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	concstr = malloc((length + 1) * sizeof(char));

	if (concstr == NULL)
	{
		free(concstr);
		return (NULL);
	}

	for (i = j = index = 0; index < length; j++, index++)
	{
		if (av[i][j] == '\0')
		{
			concstr[index] = '\n';
			i++;
			index++;
			j = 0;
		}
		if (index < length - 1)
			concstr[index] = av[i][j];
	}
	concstr[index] = '\0';

	return (concstr);
}
