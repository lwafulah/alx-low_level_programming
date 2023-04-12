#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: integer to convert
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		return (0);

	int count;
	unsigned long int mask;

	mask = n;
	count = 0;

	while (mask > 0)
	{
		mask >>= 1;
		count++;
	}
	while (count > 0)
	{
		count--;
		mask = n >> count;

		if (mask & 1)
			_putchar ('1');
		else
			_putchar ('0');
	}
}
