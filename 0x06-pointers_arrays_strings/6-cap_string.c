#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @str: - string to be used
 * Return: 0 on success
 */
char *cap_string(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','
				|| str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?'
				|| str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
