#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be used
 * Return: 0 on success
 */
void puts2(char *str)
{
	int count = 0;

	while (*str)
	{
		if (count % 2 == 0)
		{
			_putchar(*str);
		}
		count++;
		str++;
	}
	_putchar('\n');
}
