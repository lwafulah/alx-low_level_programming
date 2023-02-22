#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter to be tested
 * Return: always n
 */
int print_last_digit(int n)
{
	int last_digit = (n % 10) + '0';

	_putchar(last_digit);
	return (last_digit);
}
