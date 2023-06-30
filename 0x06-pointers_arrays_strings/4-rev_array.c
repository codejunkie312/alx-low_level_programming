#include "main.h"

/**
 * reverse_array - reverse the contents of an array to the nth number
 * @a: array of ints
 * @n: number of elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
