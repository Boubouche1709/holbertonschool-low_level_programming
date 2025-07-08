#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array
 * @grid: The 2D array
 * @height: The height of grid
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
