#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * puts_half - prints the second half of the string
 * @str: a string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len, i;

	len = strlen(str) - 1;
	for (i = (len / 2) + 1; i <= len; i++)
	{
		write(1, str + i, 1);
	}
	putchar('\n');
}
