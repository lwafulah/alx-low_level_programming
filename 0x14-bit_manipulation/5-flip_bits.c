#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first integer
 * @m: second integer
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned int num = 0;

	while (val != 0)
	{
		val &= (val - 1);
		num++;
	}

	return (num);
}
