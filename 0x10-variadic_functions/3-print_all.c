#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Entry Point
 * @format: list of types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *str;

	va_start(valist, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s", str);
			break;
		default:
			break;
		}
		if (format[i])
		{
			printf(", ");
		}
	}
	printf("\n");

	va_end(valist);
}
