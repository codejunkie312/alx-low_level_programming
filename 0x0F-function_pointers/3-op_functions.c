#include "3-calc.h"

/**
 * op_add - add a and b
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract b from a
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a and b
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: first integer
 * @b: second integer
 * Return: the result of the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: the remained of division between a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
