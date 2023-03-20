#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog structure
 * @age: the age of the dog
 * @owner: the owner of the dog
 * @name: the name of the dog
 * @d: a dog structure
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
