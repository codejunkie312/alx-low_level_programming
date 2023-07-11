#include "main.h"
#include <stddef.h>


/**
 * argstostr - Concatenates all the args of the program
 * @ac: the arg count
 * @av: the arg vector
 * Return: Pointer to the newly allocated space in memory,
 * which cointains the concatenated args, each seperated by a newline
 * if ac == 0, av == NULL, or if allocation fails, return NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	len += ac;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
