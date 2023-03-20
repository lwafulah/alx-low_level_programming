#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a structure dog
 * @d: pointer to the structure
 * Return: 0 on success
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
