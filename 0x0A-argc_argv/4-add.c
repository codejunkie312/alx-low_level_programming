#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if string is number
 * @s: string to check
 * Return: 0 if not a number, 1 if it is
 */

int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

/**
 * main - prints the addition of n positive numbers
 * @argc: number of args in command line
 * @argv: array containing command line args
 * Return: 0 if success 1 if failure
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
