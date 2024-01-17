#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, left, right, jump;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = jump;

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		left = right;
		right += jump;
	}

	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	if (right >= size)
		right = size - 1;

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
