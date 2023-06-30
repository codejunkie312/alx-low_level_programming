#include "main.h"

/**
 * _strcat - appends two strings
 * @dest: a string
 * @src: a string
 * Return: a pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	char *cat;

	while (*dest != '\0')
	{
		*cat = *dest;
		cat++;
		dest++;
	}
	while (*src != '\0')
	{
		*cat = *src;
		cat++;
		src++;
	}
	return (cat);
}
