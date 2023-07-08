#include "main.h"

/**
 * main - print the number of args in command line
 * @argc: number of args in command line
 * @argv: array containing command line args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
