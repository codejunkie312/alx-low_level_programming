#include "main.h"

/**
 * _puts_recursion - prints a string that ends with a new line
 * @s: a pointer to a string that we want to print
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
