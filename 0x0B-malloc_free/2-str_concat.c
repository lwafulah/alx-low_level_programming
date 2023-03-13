#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: str or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	int i;

	char *s;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		len2 = strlen(s2);
	}
	s = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[len1 + len2] = '\0';

	return (s);
}
