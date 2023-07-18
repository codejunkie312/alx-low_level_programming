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

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
