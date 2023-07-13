#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: string one
 * @s2: string two
 * @n: the number of bytes from s2 to concatenate to s1
 * Return: Pointer to a new string that is the result of s2 concatenated
 * to s2 up to the nth byte, NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2;

	len1 = s1 != NULL ? strlen(s1) : 0;
	len2 = s2 != NULL ? strlen(s2) : 0;

	if (n >= len2)
		n = len2;

	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];

	str[i] = '\0';
	return (str);
}
