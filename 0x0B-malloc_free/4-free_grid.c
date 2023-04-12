#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*free_grid - function that frees a 2 dimensional array of of int.
*@grid: two dimensional array
*@height: height of the grid
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
