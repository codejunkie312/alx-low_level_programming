#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & mask)
			flag = 1;
		if (flag == 1)
		{
			if ((n >> i) & mask)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
