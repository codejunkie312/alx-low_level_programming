#include "main.h"
#include<stdlib.h>

/**
 * print_to_98 - print from n to 98
 * @n: an integer
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	i = n;
	while (i != 98)
	{
		if (i < 0)
		{
			_putchar('-');
			if (i <= -10)
			{
				if (i <= -100)
					_putchar('0' + ((abs(i) / 100) % 10));
				_putchar('0' + ((abs(i) / 10) % 10));
				_putchar('0' + (abs(i) % 10));
			}
			else
			{
				_putchar('0' + abs(i));
			}
		}
		else if (i >= 10)
		{
			if (i >= 100)
				_putchar('0' + ((i / 100) % 10));
			_putchar('0' + ((i / 10) % 10));
			_putchar('0' + (i % 10));
		}
		else
			_putchar('0' + i);
		if (i > 98)
			i--;
		if (i < 98)
			i++;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
