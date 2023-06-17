#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 * display last digit of n
 * Return: 0 always (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int last;
last = n % 10;
if (last < 0)
last = last * -1;
if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last);
if (n < 6 && n != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
if (n == 0)
printf("Last digit of %d is %d and is 0\n", n, last);

return (0);
}
