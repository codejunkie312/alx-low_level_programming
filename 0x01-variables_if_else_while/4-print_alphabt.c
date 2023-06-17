#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 * Return: 0 Always (Succes)
 */

int main(void)
{
char alphabet[] = "abcdfghijklmnoprstuvwxyz";
size_t i;

for (i = 0; i < strlen(alphabet); i++)
{
putchar(alphabet[i]);
}

putchar('\n');
return (0);
}
