#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - Dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: A type struct called dog with name, age and owner elements
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
