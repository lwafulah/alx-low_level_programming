#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len, i, j;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	len = strlen(s1);
	str = malloc(len + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';

	return (str);
}
