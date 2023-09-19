#include "main.h"

/**
 * _strncat - at most n bytes will be appended to dest from src
 * @dest: a pointer to a string
 * @src: pointer to a string
 * @n: an int
 * Return: a pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
