#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be used
 * Return: 0 on success
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	n = (i - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
