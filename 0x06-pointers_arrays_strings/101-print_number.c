#include "main.h"
#include <limits.h>

/**
 * print_number - prints a number int
 * @n: number
 * Return: nothing
 */

void print_number(int n)
{
	if (n < 0 && n != INT_MIN)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	if (n == INT_MIN)
		_putchar('8');
	else
		_putchar((n % 10) + '0');
}
