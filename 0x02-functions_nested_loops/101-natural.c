#include<stdio.h>

/**
 * main - check code
 *
 * Return: sum
 */

int main(void)
{
	int count, i, sum;

	sum = 0;

	for (i = 1; i < 1025; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
			count++;
		}
		else
			continue;
	}

	printf("%d\n", sum);
	return (0);
}
