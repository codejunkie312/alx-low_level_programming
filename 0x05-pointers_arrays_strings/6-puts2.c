#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * puts2 - prints every other char starting with the first
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int len, count;

	count = 0;
	len = strlen(str) - 1;
	while (count <= len)
	{
		write(1, str, 1);
		str += 2;
		count += 2;
	}
	putchar('\n');
}
