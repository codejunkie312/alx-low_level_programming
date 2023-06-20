#include "main.h"

/**
 * jack_bauer - prints time in hh:mm format for each minute
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int h, m, i, j;

	for (i = 0; i < 3; i++)
	{
		for (h = 0; h < 10; h++)
		{
			for (j = 0; j < 6; j++)
			{
				for (m = 0; m < 10; m++)
				{
					if (i == 2 && h == 4)
						return;
					_putchar('0' + i);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + j);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}
