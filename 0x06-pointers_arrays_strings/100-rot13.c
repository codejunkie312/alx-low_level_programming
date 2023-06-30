#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: a string
 */

char *rot13(char *s)
{
	int i;
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *p;

	for (i = 0; s[i]; i++)
	{
		p = strchr(alpha, s[i]);
		if (p)
			s[i] = rot13[p - alpha];
	}
	return (s);
}
