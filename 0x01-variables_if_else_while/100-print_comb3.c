#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (Succes)
 */

int main(void)
{
int i;
int j;

for (i = 48; i < 57; i++)
{
for (j = 48; j < 58; j++)
{
if ((i == 48 && j >= 49) |
(i == 49 && j >= 50) ||
(i == 50 && j >= 51) ||
(i == 51 && j >= 52) ||
(i == 52 && j >= 53) ||
(i == 53 && j >= 54) ||
(i == 54 && j >= 55) ||
(i == 55 && j >= 56) ||
(i == 56 && j >= 57))
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}


putchar('\n');
return (0);
}
