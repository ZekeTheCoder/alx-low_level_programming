#include "main.h"

/**
 * _islower - This function checks for lowercase character.
 *
 *@c: int character to compare
 *
 * Return: 1 if int c is lowercase, 0 if otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
