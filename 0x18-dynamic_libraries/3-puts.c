#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string
 * @s: a char
 * Return: nothing
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
}
