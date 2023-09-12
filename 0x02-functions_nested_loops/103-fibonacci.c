#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num1, num2, n, sum;

	num1 = 1;
	num2 = 2;
	n = sum = 0;
	while (n <= 4000000)
	{
		n = num1 + num2;
		num1 = num2;
		num2 = n;
		if ((num1 % 2) == 0)
		{
			sum += num1;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
