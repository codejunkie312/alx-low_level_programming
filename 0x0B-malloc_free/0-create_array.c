#include "main.h"

/**
 * create_array - creates an array of chars,
 * and intializes it with a specific char
 * @size: size of the array
 * @c: char to populate the array with
 * Return: NULL if size = 0 or if it fails to allocate memory,
 * returns a pointer to array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);

}
