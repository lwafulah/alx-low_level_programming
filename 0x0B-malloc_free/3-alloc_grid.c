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
	int y, x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	for (y = 0; y < height; y++)
	{
		grid[y] = (int *)malloc(width * sizeof(int));
	}
	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}
	return (grid);
}

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: pointer to a 2 dimensional array of integers
 * @height: parameter
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
