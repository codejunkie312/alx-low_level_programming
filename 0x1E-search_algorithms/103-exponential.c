#include "search_algos.h"

/**
 * binary_search_exp - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int binary_search_exp(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	right = (i < size) ? i : size - 1;
	left = i / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_search_exp(array, left, right, value));
}
