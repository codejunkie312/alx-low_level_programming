#include "main.h"
#include<string.h>

/**
 * main - Entry point
 * Print text using ascii
 * Return: 0 Always Success
 */

int main(void)
{
	char text[] = "_putchar\n";
	size_t i;

	for (i = 0; i < strlen(text); i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
