#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: int 1
 * @b: int 2
 * Returns: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
