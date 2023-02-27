#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be used
 * Return: second half of the string str
 */
void puts_half(char *str)
{
	int n = 0;
	int length;

	while (str[n] != '\0')
	{
		n++;
	}
	length = n;
	if (length % 2 == 0)
	{
		for (n = length / 2; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (length - 1) / 2; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
