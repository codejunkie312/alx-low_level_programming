#include "main.h"
#include <ctype.h>

/**
 * string_toupper - makes all chars into uppercase letters
 * @s: string
 * Return: pointer to a string start
 */

char *string_toupper(char *s)
{
	char *p;

	p = s;
	while (*p != '\0')
	{
		if (islower(*p))
			*p = toupper(*p);
		p++;
	}
	return (s);
}
