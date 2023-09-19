#include "main.h"
#include <string.h>

/**
 * _strchr - Findd char and returns pointer to it
 * @s: a pointer for a buffer to look in
 * @c: char to look for
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return (NULL);
}
