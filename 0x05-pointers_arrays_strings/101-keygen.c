#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme.
 *
 * Return: 0 Always.
 */

int main(void)
{
	int random = 0, sum = 0, finalChar;
	time_t t;

	srand((unsigned int)time(&t));
	while (sum < 2772)
	{
		random = rand() % 95 + 32;

		if ((sum + random) > 2772)
			break;
		sum = sum + random;

		if (sum <= 2772)
		{
			printf("%c", random);
		}
	}

	finalChar = 2772 - sum;

	if (finalChar < 32)
		finalChar = 32;
	else if (finalChar > 126)
		finalChar = 126;

	printf("%c\n", finalChar);

	return (0);
}
