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

	if (b == NULL)
		 return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
		{
			dec_value += base;
		}

		base = base * 2;
	}
	return (dec_value);
}
