#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: parameter to be tested
 * Return: -1 if n is lower than 0 to indicate an error otherwise 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int result = 1;
		int i;

		for (i = 1; i <= n; i++)
		{
			result *= i;
		}
		return (result);
	}
}
