#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: first parameter
 * @max: second parameter
 * Return: the pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
