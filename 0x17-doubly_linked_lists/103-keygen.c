#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * compute_sum_prod - revised function
  * @str: input string
  * @length: length of the string
  * @option: determines the operation
  * Return: result.
  */
int compute_sum_prod(char *str, int length, char option)
{
	int outcome, idx;

	outcome = option == 0 ? 0 : 1;
	for (idx = 0; idx < length; idx++)
	{
		if (option == 0)
			outcome += str[idx];
		else
			outcome *= str[idx];
	}
	return ((outcome ^ (option == 0 ? 0x4F : 0x55)) & 0x3F);
}

/**
  * find_max - revised function
  * @str: input string
  * @length: length of the string
  * Return: result.
  */
int find_max(char *str, int length)
{
	int idx;
	int outcome = str[0];

	for (idx = 0; idx < length; idx++)
		if (str[idx] > outcome)
			outcome = str[idx];
	srand(outcome ^ 0xE);
	return (rand() & 0x3F);
}

/**
  * calc_square_sum - revised function
  * @str: input string
  * @length: length of the string
  * Return: result.
  */
int calc_square_sum(char *str, int length)
{
	int idx, outcome = 0;

	for (idx = 0; idx < length; idx++)
		outcome += str[idx] * str[idx];
	return ((outcome ^ 0xEF) & 0x3F);
}

/**
  * generate_rand - revised function
  * @str_elem: character from the string
  * Return: result.
  */
int generate_rand(char str_elem)
{
	int idx, outcome = 0;

	for (idx = 0; idx < str_elem; idx++)
		outcome = rand();
	return ((outcome ^ 0xE5) & 0x3F);
}

/**
  * main - key generator with revised function and variable names
  * @count: number of arguments
  * @args: arguments array
  * Return: 0 on success
  */
int main(int count, char *args[])
{
	char *input_str;
	char e[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char generated_key[7];
	int len, outcome;

	if (count != 2)
		return (-1);
	input_str = args[1];
	len = strlen(input_str);
	outcome = ((len ^ 0x3B) & 0x3F);
	generated_key[0] = e[outcome];
	outcome = compute_sum_prod(input_str, len, 0);
	generated_key[1] = e[outcome];
	outcome = compute_sum_prod(input_str, len, 1);
	generated_key[2] = e[outcome];
	outcome = find_max(input_str, len);
	generated_key[3] = e[outcome];
	outcome = calc_square_sum(input_str, len);
	generated_key[4] = e[outcome];
	outcome = generate_rand(input_str[0]);
	generated_key[5] = e[outcome];
	generated_key[6] = '\0';
	printf("%s\n", generated_key);
	return (0);
}
