#include "main.h"

/**
 * _memcpy - copies bytes from one buffer to another
 * @dest: pointer to where byts will be copied to
 * @src: Pointer to the source bytes to be copied from
 * @n: an int specifying how much will be copied from src
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
