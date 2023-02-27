#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be used
 * Return: 0 on success
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
