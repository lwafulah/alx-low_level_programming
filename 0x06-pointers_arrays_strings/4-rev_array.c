#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array to be reversed
 * Return: 0 on success
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
