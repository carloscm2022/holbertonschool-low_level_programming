#include "main.h"

/**
 * alloc_grid - creates a pointer to a 2 dimensional array of integers.
 *
 * @width: Width of the grid
 *
 * @height: Height of the grid
 *
 * Return: pointer to an dimensional array, NULL if failure or
 * (width height) are 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	/*
	 * z = quantity of pointers, c = thougth rows
	 * s = complete the matrix, b = free memory if malloc fail
	 */
	int z, c, s, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(void *));
	/* If malloc fails */
	if (!grid)
	{
		free(grid);
		return (NULL);
	}

	for (z = 0; z < height; z++)
	{
		grid[z] = malloc(width * sizeof(int));
		/* If malloc fails */
		if (!grid[z])
		{
			for (b = 0; b < z; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (s = 0; s < width; s++)
			grid[c][s] = 0;
	}
	return (grid);
}
