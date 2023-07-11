#include "main.h"
#include <string.h>

/**
 * countwords - Counts the number of words in a string
 * @str: The string to count words in
 * Return: The number of words in the string
 */

int countwords(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			while (str[i] && str[i] != ' ')
				i++;
			count++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: Pointer to an array of words, or NULL on failure
 */

char **strtow(char *str)
{
	char **words;
	int wc, i = 0, j, k, l;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = countwords(str);
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL || wc == 0)
		return (NULL);

	for (j = 0; j < wc; j++)
	{
		while (str[i] == ' ')
			i++;

		for (k = i; str[k] && str[k] != ' '; k++)
			;
		words[j] = malloc((k - i + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (; j >= 0; j--)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (l = 0; i < k; i++, l++)
			words[j][l] = str[i];
		words[j][l] = '\0';
	}
	words[j] = NULL;

	return (words);
}
