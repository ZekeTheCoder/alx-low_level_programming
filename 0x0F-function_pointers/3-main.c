#include "3-calc.h"

/**
 * main - Entry point
 * This file contains main function only.
 * You are not allowed to code any other function than main in this file
 * You are not allowed to directly call
 * op_add, op_sub, op_mul, op_div or op_mod from the main function
 * You have to use atoi to convert arguments to int
 * You are not allowed to use any kind of loop
 * You are allowed to use a maximum of 3 if statements
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", operation(num1, num2));

	return (0);
}
