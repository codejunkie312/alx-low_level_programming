#include "main.h"

/**
 * _strcat - appends two strings
 * @dest: a string
 * @src: a string
 * Return: a pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	char *cat, *i, *j;

	i = dest;
	while (*i != '\0')
		i++;
	cat = i;
	j = src;
	while (*j != '\0')
	{
		*cat = *j;
		cat++;
		j++;
	}
	return (dest);
}
