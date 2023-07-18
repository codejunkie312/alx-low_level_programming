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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age && d->age >= 0)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
