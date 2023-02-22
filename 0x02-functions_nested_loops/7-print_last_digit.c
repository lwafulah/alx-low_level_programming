#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter to be tested
 * Return: always n
 */
int print_last_digit(int n)
{
	int p = (n % 10);

	if (p < 0)
	{
		p = -p;
	}
	_putchar(p + '0');
	return (p);
}
