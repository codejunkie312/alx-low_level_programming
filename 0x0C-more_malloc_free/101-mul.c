#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * error_exit - prints string Error + newline and
 * exists the program with code 98
 * Return: nothing
 */

void error_exit(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * is_digit - check if string include only digit chars
 * @s: string representing digit
 * Return: 0 if not digit, 1 if it is
 */

int is_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);
	return (1);
}

/**
 * mul_nums - prints the product of two digits supplied in the form
 * of an ASCI code (strings)
 * @num1: string one representing number one
 * @num2: string two representing number two
 * Return: Nothing
 */

void mul_nums(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len = len1 + len2;
	int i, j;
	int *result = calloc(len, sizeof(int));

	if (result == NULL)
		error_exit();

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
	}

	for (i = len - 1; i > 0; i--)
	{
		result[i - 1] += result[i] / 10;
		result[i] %= 10;
	}

	i = 0;
	while (i < len - 1 && result[i] == 0)
		i++;

	for (; i < len; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
}

/**
 * main - prints the product of two numbers
 * @argc: arg count
 * @argv: array of values by vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
		error_exit();
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
		error_exit();

	mul_nums(argv[1], argv[2]);

	return (0);
}
