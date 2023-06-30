#include "main.h"

/**
 * print_buffer - prints a buffer's contents to stdout
 * @b: pointer to the buffer
 * @size: number of bytes from @b to print
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (j % 2 == 0 && j != 0)
				printf(" ");
			if (j + i < size)
				printf("%02x", *(b + i + j));
			else
				printf("  ");
		}
		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (j + i < size)
			{
				char c = *(b + i + j);

				if (c >= 32 && c <= 126)
					printf("%c", c);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
