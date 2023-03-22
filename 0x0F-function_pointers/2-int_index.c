#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array
 * @array: array to be used
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 If no element matches and If size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
