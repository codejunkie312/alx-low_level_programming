#include "main.h"

/**
 * factorial - calculates factorial of a given number
 * @n: number to calculate factorial
 * Return: factorial of the given number, -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
