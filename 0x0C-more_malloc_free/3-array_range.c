#include "main.h"

/**
 * array_range - Creates an array of ints from min to max
 * @min: the first number in the array
 * @max: the last number in the array
 * Return: Pointer to the newly created array, or NULL if min > max or if
 * memory allocation fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	arr = malloc(range * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		arr[i] = min + i;

	return (arr);
}
