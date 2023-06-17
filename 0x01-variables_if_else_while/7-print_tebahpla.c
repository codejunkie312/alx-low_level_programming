#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 * Return: 0 Always (Succes)
 */

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 26; i > 0; i--)
{
putchar(alphabet[i - 1]);
}

putchar('\n');
return (0);
}
