#include<unistd.h>
#include "function_pointers.h"

/**
 * _putchar - writes character c to output
 * @c: is charater to be outputed passed as argument
 *
 * Return: 1 on success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
