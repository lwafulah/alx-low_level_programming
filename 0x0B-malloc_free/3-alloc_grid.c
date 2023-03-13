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
