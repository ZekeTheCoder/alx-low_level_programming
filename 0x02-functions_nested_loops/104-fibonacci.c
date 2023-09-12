#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int counter;
	unsigned long num1 = 1, num2 = 2, temp;

	printf("%lu, %lu", num1, num2);

	for (counter = 0; counter < 96; counter++)
	{
		temp = num1 + num2;
		printf(", %lu", temp);
		num1 = num2;
		num2 = temp;
	}
	printf("\n");
	return (0);
}
