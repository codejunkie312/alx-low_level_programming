#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program generates an output of a random password
 *
 * Return: 0 Always
 */

#define ASCII_SUM 2772

int main(void)
{
	int sum;
	char random_char;

	srand(time(NULL));

	while (sum < ASCII_SUM)
	{
		do
		{
			random_char = '!' + (rand() % ('~' - '!' + 1));	
		}
		while (sum + random_char > ASCII_SUM);

		printf("%c", random_char);
		sum += random_char;

		if (ASCII_SUM - sum <= '~')
		{
			printf("%c", ASCII_SUM - sum);
			break;
		}
	}

	printf("\n");

	return (0);
}
