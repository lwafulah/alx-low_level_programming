#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @p: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *p)
{
	int i, j;
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == letters[j])
				p[i] = numbers[j];
		}
	}
	return (p);
}
