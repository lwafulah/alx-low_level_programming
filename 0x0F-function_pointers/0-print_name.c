#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f: pointer to the function that takes a char pointer as an arguement
 * @name: arguement being passed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
