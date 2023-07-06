#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, return 0 if not
 * @s1: the main string to compare
 * @s2: the string to compare, can contain the special character *
 * Return: 1 if the strings are identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
