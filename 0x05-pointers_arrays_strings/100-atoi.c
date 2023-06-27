#include "main.h"

/**
 * _atoi - converts char to number
 * @s: a string pointer
 * Return: int
 */

int _atoi(char *s)
{
	int result, sign, numStarted, i;

	result = 0;
	sign = 1;
	numStarted = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			numStarted = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if ((s[i] == '-' || s[i] == '+') && !numStarted)
		{
			if (s[i] == '-')
				sign = -sign;
		}
		else if (numStarted)
			break;
	}
	return (result * sign);
}
