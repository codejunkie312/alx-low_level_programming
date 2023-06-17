#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 * outputs alphabet using putchar
 * Return: 0 Always (Success)
 */

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
size_t i;

for (i = 0; i < strlen(alphabet); i++)
{
putchar(alphabet[i]);
}
putchar('\n');

return (0);
}
