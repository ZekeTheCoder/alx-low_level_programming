#include "main.h"

/**
 * set_string -Set the value of a pointer to a char.
 * Set the value of *s to point to the same location as to.
 *
 * @s: pointer to a pointer to a character.
 * @to: pointer to a character (a string).
 *
 * Return: no return.
 */

void set_string(char **s, char *to)
{
	*s = to;
}