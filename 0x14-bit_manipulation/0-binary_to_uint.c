#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int dec_value = 0;
	int base = 1;

	int i;

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			dec_value += base;
		else if ((b[i] == '0')
			dec_value += 0;
		base = base * 2;
	}
	return (dec_value);
}
