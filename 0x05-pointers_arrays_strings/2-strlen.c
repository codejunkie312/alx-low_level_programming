#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: a string of chars
 * Return: an int
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
