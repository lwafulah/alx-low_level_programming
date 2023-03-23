#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: parameter of type pointer to a string that
 * printed between the strings
 * @n: the number of strings passed to the function
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i <= n - 1; i++)
	{
		char *string = va_arg(arguments, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			if (separator != NULL)
			{
				printf("%s%s", string, separator);
			}
			else
			{
				printf("%s", string);
			}
		}
	}
	printf("\n");
	va_end(arguments);
}
