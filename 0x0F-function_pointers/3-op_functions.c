#include "3-calc.h"

/**
 * op_add - adds two numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 *
 * @a: first number.
 * @b: second number.
 *
 * Return:  the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * if the user tries to divide (/ or %) by 0,
 * print Error, followed by a new line,
 * and exit with the status 100
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers.
 * if the user tries to divide (/ or %) by 0,
 * print Error, followed by a new line,
 * and exit with the status 100
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
