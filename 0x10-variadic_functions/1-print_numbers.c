#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @n: the number of integers passed to the function
 * @separator: a pointer to a string that is passed as an argument
 * to the print_numbers function be printed between numbers
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i <= n - 1; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s", va_arg(arguments, int), separator);
		}
		else
		{
			printf("%d", va_arg(arguments, int));
		}
	}
	printf("\n");
	va_end(arguments);
}
