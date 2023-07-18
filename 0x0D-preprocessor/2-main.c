#include <stdio.h>

/**
 * main - prints the name file it was executed from
 * Return: always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
