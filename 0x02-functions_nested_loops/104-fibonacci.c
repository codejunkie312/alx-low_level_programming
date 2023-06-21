#include<stdio.h>

/**
 * print_number - prints number
 * @n: long integer
 *
 * Return: void
 */

void print_number(unsigned long n)
{
	if (n >= 10)
		print_number(n / 10);
	putchar('0' + (n % 10));
}

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long a, b, c, rest, ha, hb, ta, tb, hc, tc;

	a = 1;
	b = 2;
	printf("%lu, %lu", a, b);
	for (i = 3; i <= 92; i++)
	{
		printf(", ");
		c = a + b;
		print_number(c);
		a = b;
		b = c;
	}
	ha = a % 1000;
	hb = b % 1000;
	ta = a / 1000;
	tb = b / 1000;
	for (i = 92; i < 98; i++)
	{
		printf(", ");
		rest = (ha + hb) / 1000;
		hc = (ha + hb) - rest * 1000;
		tc = (ta + tb) + rest;
		ha = hb;
		hb = hc;
		ta = tb;
		tb = tc;
		if (hc >= 100)
		{
			printf("%ld%ld", tc, hc);
		}
		else
		{
			printf("%ld0%ld", tc, hc);
		}
	}
	putchar('\n');
	return (0);
}
