#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of this function
 * @argc: The number of CL arguments
 * @argv: an array of pointers to strings in CL
 * Return: 0 if successful, 1 if program does not receive
 * exactly one argument, or 2 if the number of bytes if negative
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	func_ptr = (char *) (long int) main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", func_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
