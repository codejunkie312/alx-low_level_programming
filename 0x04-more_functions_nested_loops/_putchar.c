#include "main.h"
#include<unistd.h>

/**
 * _putchar - output a char
 * @c: an int
 *
 * Return: nothing
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
