#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: Constant byte
 * @n: number of bytes to fill
 * Return: a Pointer to that filled buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
