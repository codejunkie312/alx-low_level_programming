#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * print_array - print n elements of an array
 * @a: array of ints
 * @n: number of elements to print
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
			continue;
		}
		printf("%d, ", a[i]);
	}
}
