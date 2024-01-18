#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
*/
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (right < left)
		return (-1);

	mid = left + (right - left) / 2;
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	if ((mid == left || value != array[mid - 1]) && array[mid] == value)
		return (mid);
	if (array[mid] >= value)
		return (binary_search_recursive(array, left, mid, value));

	return (binary_search_recursive(array, mid + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
