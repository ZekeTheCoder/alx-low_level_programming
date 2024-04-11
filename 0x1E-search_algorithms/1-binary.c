#include "search_algos.h"

/**
 * binary_search - This function searches for a value in a sorted array
 *using binary search algorithm
 *
 * @array: array to search through
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: index of value, -1 if NULL or not found
 */

int binary_search(int *array, size_t size, int value)
{
	int i, low, middle, high;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		middle = (low + high) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}

		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
