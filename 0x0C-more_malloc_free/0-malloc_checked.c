#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 * Return: Pointer to the allocated mempry, if malloc fails, terminates
 * the process with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
