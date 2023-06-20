#include "main.h"

/**
 * times_table - prints times table up to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i * j) >= 10)
			{
				_putchar('0' + (((i * j) / 10) % 10));
				_putchar('0' + ((i * j) % 10));
			}
			else
				_putchar('0' + j * i);
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
			if ((i * (j + 1)) < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
