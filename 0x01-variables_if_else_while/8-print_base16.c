#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 * Return: 0 Always (Succes)
 */

int main(void)
{
char hex[] = "0123456789abcdef";
size_t i;

for (i = 0; i < strlen(hex); i++)
{
putchar(hex[i]);
}

putchar('\n');
return (0);
}
