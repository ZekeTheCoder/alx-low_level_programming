#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int counter;
	long int num1, num2, n;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (counter = 0; counter < 48; counter++)
	{
		n = num1 + num2;
		printf(", %ld", n);
		num1 = num2;
		num2 = n;
	}
	printf("\n");
	return (0);
}
