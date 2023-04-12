#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - return a pointer to a 2 dimensional array of integers.
 *@width: width of the array
 *@height: height of the array
 *Return: if width or height <= 0 - NULL
 *	failure - NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid  == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(grid[y]);

			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
