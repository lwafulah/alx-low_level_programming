#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 * @width: first parameter
 * @height: second parameter
 * Return: pointer to a 2 dimensional array, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
