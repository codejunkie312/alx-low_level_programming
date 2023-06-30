#include "main.h"

/**
 * leet - encodes a string into a 1337
 * @s: string
 * Return: a pointer to a string
 */

char *leet(char *s)
{
	char leet_chars[] = "aAeEoOtTlL";
	char replace_chars[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (s[i] == leet_chars[j])
			{
				s[i] = replace_chars[j];
				break;
			}
		}
	}
	return (s);
}
