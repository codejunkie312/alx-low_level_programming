#include "main.h"

/**
 * _isupper - check if c is upper
 * @c: an int
 *
 * Return: 1 if upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
