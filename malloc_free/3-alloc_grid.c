#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: Pointer to the 2D array, or NULL
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
	return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		free(grid[j]);
	free(grid);
	return (NULL);
	}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
