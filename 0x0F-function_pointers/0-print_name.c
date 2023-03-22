#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f: pointer to the function that takes a char pointer as an arguement
 * @name: arguement being passed
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
