#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @n: number of elements of the array to be printed
 * @a: array to be printed
 * Return: 0 on success
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
