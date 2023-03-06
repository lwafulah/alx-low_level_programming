#include "main.h"
/**
 * *_strchr -  function that locates a character in a string
 * @s: string to be tested
 * @c: character to be returned
 * Return: pointer to the first occurrence of c in the string s or NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		return (s);
	}
	return (NULL);
}
