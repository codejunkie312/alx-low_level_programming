#include "main.h"
#include<string.h>

/**
 * print_alphabet_x10 - Prints Alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	size_t i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < strlen(alphabet); i++)
		{
			_putchar(alphabet[i]);
		}

		_putchar('\n');
	}
}
