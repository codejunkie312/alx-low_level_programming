#include "main.h"
#include<string.h>

/**
 * more_numbers - write 0 to 14 10 times
 * Return: nothing
 */

void more_numbers(void)
{
	char numbers[] = "01234567891011121314";
	int j;
	size_t i;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i < strlen(numbers); i++)
			_putchar(numbers[i]);
		_putchar('\n');
	}
}
