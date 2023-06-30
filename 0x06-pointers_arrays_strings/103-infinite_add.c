#include "main.h"
#include <string.h>

/**
 * infinite_add - add two positive numbers that are strings
 * @n1: first string number
 * @n2: second string number
 * @r: buffer dedicated to the result of addition
 * @size_r: size of the buffer dedicated int
 * Return: a pointer to a char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, n1_len, n2_len, digit_sum;
	char tmp;

	n1_len = strlen(n1);
	n2_len = strlen(n2);
	if (n1_len > size_r || n2_len > size_r || size_r < 2)
		return (0);
	i = n1_len - 1;
	j = n2_len - 1;
	k = 0;
	carry = 0;
	while (i >= 0 || j >= 0)
	{
		digit_sum = carry;
		if (i >= 0)
			digit_sum += n1[i--] - '0';
		if (j >= 0)
			digit_sum += n2[j--] - '0';
		if (digit_sum > 9)
		{
			carry = 1;
			digit_sum -= 10;
		}
		else
			carry = 0;
		r[k++] = digit_sum + '0';
		if (k >= size_r - 1)
			return (0);
	}
	if (carry)
		r[k++] = '1';
	r[k] = '\0';
	for (i = 0; i < k / 2; i++)
	{
		tmp = r[i];
		r[i] = r[k - i - 1];
		r[k - i - 1] = tmp;
	}
	return (r);
}
