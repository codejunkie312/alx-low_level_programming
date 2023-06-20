#include "main.h"

/**
 * print_sign - outputs sign of number
 * @n: an int
 *
 * Return: 1 if +, 0 if 0, -1 if -
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
