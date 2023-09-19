#include "main.h"

/**
 * _strcmp - returns the difference in ASCII values of two strings
 * @s1: first string
 * @s2: second string
 * Return: an int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}
