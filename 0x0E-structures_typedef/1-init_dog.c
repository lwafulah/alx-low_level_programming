#include "dog.h"
/**
 * init_dog - function that initialize a variable of a structure dog
 * @d: pointer to the arguements
 * @name: first element
 * @age: second argument
 * @owner: thirsd element
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
