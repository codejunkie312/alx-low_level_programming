#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len;

	if (s == NULL)
		return;
	len = strlen(s) - 1;
	while (len >= 0)
	{
		write(1, (s + len), 1);
		len--;
	}
	putchar('\n');
}
