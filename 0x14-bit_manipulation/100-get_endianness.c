#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 1 if system is little endian and 0 if big endian
 */
int get_endianness(void)
{
	unsigned int num = 0x01020304;
	char *ptr = (char *)&num;

	if (*ptr == 0x04)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
