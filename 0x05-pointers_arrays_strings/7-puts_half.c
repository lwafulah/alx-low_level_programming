#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be used
 * Return: second half of the string str
 */
void puts_half(char *str)
{
	int i = 0;
	int length;

	while (str[i] != '\0')
	{
		i--;
	}
	length = i;

	i = length - 1;
	while (i >= length / 2)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
