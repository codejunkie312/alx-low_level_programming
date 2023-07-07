#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string
 * @str: a char
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	putchar('\n');
}
