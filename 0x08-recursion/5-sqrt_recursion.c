#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * @i: integer
 * Return: integer
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (i + 1);
}
