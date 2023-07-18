#include "dog.h"

/**
 * free_dog - frees a dog_t struct
 * @d: pointer to the struct to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
