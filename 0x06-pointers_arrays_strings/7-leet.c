#include "main.h"

/**
 * leet - encodes a string into 1337.
 * • Letters a and A should be replaced by 4
 * • Letters e and E should be replaced by 3
 * • Letters o and O should be replaced by 0
 * • Letters t and T should be replaced by 7
 * • Letters l and L should be replaced by 1
 *
 * @s: input string.
 *
 * Return: string.
 */

char *leet(char *s)
{
	int count = 0, i;
	int lower_case[] = {97, 101, 111, 116, 108}; /*aeotl*/
	int upper_case[] = {65, 69, 79, 84, 76};     /*AEOTL*/
	int numbers[] = {52, 51, 48, 55, 49};	     /*43701*/

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower_case[i] || *(s + count) == upper_case[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
