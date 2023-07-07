#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to look for
 * @accept: string containing the chars to match
 * Return: number of bytes in the initial seg of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, hit, length;

	length = 0;
	for (i = 0; s[i]; i++)
	{
		hit = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				hit = 1;
				break;
			}
		}
		if (hit == 0)
			return (length);
	}
	return (length);
}
