#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: first parameter
 * @old_size: second parameter
 * @new_size: third parameter
 * Return: pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		((char *)p)[i] = ((char *)ptr)[i];
	free(ptr);
	return (p);
}
