#include "main.h"
/**
 * *rot13 - function that encodes a string with rot13
 * @str: string to be encoded
 * Return: 0 on success
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = (str[i] >= 'A' && str[i] <= 'Z') ?
		((str[i] + 13 > 'Z') ? str[i] - 13 : str[i] + 13) :
		((str[i] + 13 > 'z') ? str[i] - 13 : str[i] + 13);
	}
	return (str);
}
