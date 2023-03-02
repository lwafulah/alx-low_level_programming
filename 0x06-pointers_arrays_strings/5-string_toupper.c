#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be checked
 * Return: 0 on success
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
