#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array and initializes it to 0
 * @nmemb: The number of elements
 * @size: The size of each element
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0
 * or if memory allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
