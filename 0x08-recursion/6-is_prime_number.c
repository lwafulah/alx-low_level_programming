#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * @n: integer
 * Return: integer (1 if n is prime, 0 otherwise)
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_check_prime(n, 2));
}

/**
 * _check_prime - function that checks if a number is prime
 * @n: integer
 * @i: integer
 * Return: integer
 */
int _check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (_check_prime(n, i - 1));
}
