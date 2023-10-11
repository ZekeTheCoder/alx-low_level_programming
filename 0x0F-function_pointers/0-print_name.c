#include "function_pointers.h"

/**
 * print_name - prints a name.
 * Using pointer to a function.
 *
 * @name: input name.
 * @f: pointer to a function.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
