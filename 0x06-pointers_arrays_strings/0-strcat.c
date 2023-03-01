#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * Return: 0 on success
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		p++;

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
