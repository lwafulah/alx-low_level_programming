#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string to be tested
 * Return: length of string s
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}
	return (count);
}
