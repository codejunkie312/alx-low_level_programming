#include "main.h"

/**
 * _isalpha - checks if letter or otherwise
 * @c: ascii number
 *
 * Return: 1 if letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
