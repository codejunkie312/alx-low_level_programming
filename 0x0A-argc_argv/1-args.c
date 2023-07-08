#include "main.h"

/**
 * main - print the number of args in command line
 * @argc: number of args in command line
 * @argv: array containing command line args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
