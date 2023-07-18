#include "dog.h"
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: NULL if the function fails, otherwise a pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dog_name, *dog_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog_name = malloc(strlen(name) + 1);
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog_owner = malloc(strlen(owner) + 1);
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(dog);
		return (NULL);
	}

	strcpy(dog_name, name);
	strcpy(dog_owner, owner);

	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;

	return (dog);
}
