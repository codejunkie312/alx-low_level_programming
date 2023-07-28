#include <stdio.h>

/**
 * before_main - Function to print before main is executed
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
