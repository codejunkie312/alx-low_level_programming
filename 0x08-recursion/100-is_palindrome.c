#include "main.h"
#include <string.h>

/**
 * helper - recursive helper function
 * @s: string to check
 * @start: starting index
 * @end: ending index
 * Return: 1 if string is a palindrome, 0 if not
 */

int helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if the string is a palindrom, 0 if not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (helper(s, 0, len - 1));
}
