#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: parameter
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	while (1)
	{
		ptr = malloc(b);
		if (ptr == NULL)
			exit(98);
		else
			break;
	}
	return (ptr);
}
