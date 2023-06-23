#include "main.h"
#include<limits.h>

/**
 * print_number - prints number
 * @n: an int
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;
	if (m / 10)
		print_number(m / 10);
	_putchar('0' + (m % 10));
}
