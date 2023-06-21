#include<stdio.h>

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	long a, b, c, sum;

	sum = 0;
	a = 1;
	b = 2;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
