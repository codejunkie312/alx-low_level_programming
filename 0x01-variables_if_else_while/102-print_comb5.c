#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 Always (Succes)
 */

int main(void)
{
int i, j, k, l;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = i; k < 10; k++)
{
for (l = (j == 9 && k == i) ? 10 : 0; l < 10; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
if (k == i && l == 0)
{
l = j + 1;
}
putchar(l + '0');

if (i != 9 || j != 8 || k != 9 || l != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
