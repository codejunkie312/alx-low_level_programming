#include "main.h"

/**
 * print_times_table - prints a table that n by n
 * @n: integer not more than 15 and no less than 0
 *
 * Return: a table of digits
 */

void print_times_table(int n)
{
	int i, j, count, s;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if ((i * j) >= 1000)
			{
				_putchar('0' + (((i * j) / 1000) % 10));
			}
			if ((i * j) >= 100)
			{
				_putchar('0' + (((i * j) / 100) % 10));
			}
			if ((i * j) >= 10)
			{
				_putchar('0' + (((i * j) / 10) % 10));
				_putchar('0' + ((i * j) % 10));
			}
			if ((i * j) < 10)
				_putchar('0' + (i * j));
			if (j == n)
				continue;
			_putchar(',');
			if ((i * (j + 1)) >= 1000)
				count = 0;
			else if ((i * (j + 1)) >= 100)
				count = 1;
			else if ((i * (j + 1)) >= 10)
				count = 2;
			else
				count = 3;
			for (s = count; s > 0; s--)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
