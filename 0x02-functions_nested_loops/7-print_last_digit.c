#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @n: an int
 *
 * Return: an int
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(((n % 10) * -1) + '0');
		return ((n % 10) * -1);
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
