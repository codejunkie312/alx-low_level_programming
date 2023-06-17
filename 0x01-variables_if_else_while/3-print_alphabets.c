#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 * Outputs alphabet lowerUPPER
 * Return: 0 Always (Succes)
 */

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
char ALPHABET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
size_t i;

for (i = 0; i < strlen(alphabet); i++)
{
putchar(alphabet[i]);
}
for (i = 0; i < strlen(ALPHABET); i++)
{
putchar(ALPHABET[i]);
}
putchar('\n');

return (0);
}
