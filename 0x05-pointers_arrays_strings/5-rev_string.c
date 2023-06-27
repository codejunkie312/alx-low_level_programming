#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: a string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len, i;
	char first;

	len = strlen(s) - 1;
	for (i = 0; i <= len / 2; i++)
	{
		first = s[i];
		s[i] = s[len - i];
		s[len - i] = first;
	}
}
