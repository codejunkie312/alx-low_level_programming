#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: The array to search
 * @size: the number of elements in the array
 * @cmp: the function to use to compare
 * Return: the index of the first matching element, or -1 if no matchees
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
