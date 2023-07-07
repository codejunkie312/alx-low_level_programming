#include "main.h"

/**
 * _strcpy - copies src to dest
 * @dest: copied to
 * @src: copied from
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
