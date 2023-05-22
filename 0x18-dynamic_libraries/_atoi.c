#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int sign = 1, i = 0, sum = 0;

	if (s[i] == '-')
		sign = -1;

	if (s[i] == '+' || s[i] == '-')
		i++;

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		sum = (sum * 10) + (s[i] - '0');
		i++;
	}
	return (sum * sign);
}
