#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (findSqrt(n, 1));
}

/**
 *  findSqrt - find the natural square root of a given number
 *  @n: integer
 *  @i: integer
 *  Return: integer
 */
int findSqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (findSqrt(n, i + 1));
}
