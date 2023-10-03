#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer to the dynamically allocated
 * and initialized 2D array of integers.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **gridalloc;

	if (width < 1 || height < 1)
		return (NULL);

	gridalloc = malloc(height * sizeof(int *));
	if (gridalloc == NULL)
	{
		free(gridalloc);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridalloc[i] = malloc(width * sizeof(int));
		if (gridalloc[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(gridalloc[i]);
			}
			free(gridalloc);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridalloc[i][j] = 0;
		}
	}

	return (gridalloc);
}
