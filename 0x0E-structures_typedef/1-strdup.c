#include "main.h"
#include <string.h>

/**
 * _strdup - allocates memory to store a specific string
 * @str: string to store
 * Return: Returns q pointer to that string,
 * return NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	ptr = (char *)malloc((strlen(str) + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		ptr[i] = *(str + i);

	return (ptr);
}
