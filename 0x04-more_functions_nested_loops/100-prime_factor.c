#include<stdio.h>
#include<math.h>

/**
 * main - finds largest prime number
 * Return: 0 Always
 */

int main(void)
{
	unsigned long n, maxPrime, i;

	maxPrime = -1;
	n = 612852475143;
	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n /= 3;
	}
	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n /= (i + 2);
		}
	}
	if (n > 4)
		maxPrime = n;
	printf("%lu\n", maxPrime);

	return (0);
}
