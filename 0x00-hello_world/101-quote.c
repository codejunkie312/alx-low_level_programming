#include<string.h>
#include<unistd.h>

/**
 * main - Entry point
 * outputs string
 * Return: Always 1 (Success)
 */

int main(void)
{
const char *quote;
quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quote, strlen(quote));
return (1);
}
