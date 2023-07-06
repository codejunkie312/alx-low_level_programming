#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: a pointer to a string
 * Return: an int representing the length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
