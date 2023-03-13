#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * **alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: first parameter
 * @height: second parameter
 * Return: NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int y, x, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	for (y = 0; y < height; y++)
	{
		grid[y] = (int *)malloc(width * sizeof(int));
		if (grid[y] == NULL)
		{
			for (x = 0; x < y; x++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			grid[y][k] = 0;
		}
	}
	return (grid);
}
