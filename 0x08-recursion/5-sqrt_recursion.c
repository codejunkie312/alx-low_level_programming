#include "main.h"

/**
 * helper - helper function for checking square root
 * @n: the number to find the square root of
 * @i: the incrementing count to check for square root
 * Return: natrual square root of a number or -1 if no natural square root
 */

int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: natural square root of a number or -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 1));
}
