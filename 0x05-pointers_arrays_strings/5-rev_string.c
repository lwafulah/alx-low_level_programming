#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return 0 on Success
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
		s[i] = s[i] + s[j];
		s[j] = s[i] - s[j];
		s[i] = s[i] - s[j];
		j++;
		i--;
	}
}
