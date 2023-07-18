#include "dog.h"

/**
 * init_dog - Initalizes a variable of type struct dog
 * @d: a pointer to the dog struct to initialize
 * @name: the name to set for the dog
 * @age: The age to set for the dog
 * @owner: The owner to set for the dog
 * Return: void
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
