#include "main.h"
/**
 * add - adds two integers and returns the result.
 * @num1: The first integer to add.
 * @num2: The second integer to add.
 * Return: The sum of num1 and num2.
 */
int add(int num1, int num2)
{
	int sum = num1 + num2;
	int s = sum % 10;
	int t = sum / 10;

	if (t > 0)
	{
		_putchar(t + '0');
	}
	_putchar(s + '0');
	return (sum);
}
