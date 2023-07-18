#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: A pointer to the struct dog to print
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %.6f\n", d->age ? d->age : 0);
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
