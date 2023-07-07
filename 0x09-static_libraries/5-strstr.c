#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: substring to be found
 * Return: pointer to the beginning of the located substring,
 * or NULL if the sbstring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (!*needle)
		return (haystack);
	for (; *haystack; haystack++)
	{
		p1 = haystack;
		p2 = needle;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}

		if (!*p2)
			return (haystack);
	}
	return (NULL);
}
