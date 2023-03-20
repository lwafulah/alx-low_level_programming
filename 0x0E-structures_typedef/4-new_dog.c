#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 * Return: 0 on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
