#include<stdio.h>

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
