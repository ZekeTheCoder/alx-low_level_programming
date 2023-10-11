#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 * Description: prints the opcodes of its own main function.
 * You are allowed to use printf and atoi
 * You have to use atoi to convert the argument to an int
 * If the number of argument is not the correct one,
 * print Error, followed by a new line, and exit with the status 1
 * If the number of bytes is negative,
 * print Error, followed by a new line, and exit with the status 2
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int numbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbytes = atoi(argv[1]);

	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < numbytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i != numbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
