#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 if strings are equal, 1 if s1 > s2, and -1 if s2 > s1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
