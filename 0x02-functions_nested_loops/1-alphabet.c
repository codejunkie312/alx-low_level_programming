#include "main.h"
#include "string.h"

/**
 * print_alphabet - prints alphabet and ends with new line
 *
 * Return: 0 always Success
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	size_t i;

	for (i = 0; i < strlen(alphabet); i++)
	{
		_putchar(alphabet[i]);
	}

	_putchar('\n');
}
