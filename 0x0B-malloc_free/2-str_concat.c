#include "main.h"
#include <string.h>

/**
 * str_concat - joins two strings together,
 * treats as empty string if empty
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a new string that contains the joined strings,
 * Null if failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (s == NULL)
		return (NULL);

	strcpy(s, s1);
	strcpy(s + strlen(s1), s2);

	return (s);
}
