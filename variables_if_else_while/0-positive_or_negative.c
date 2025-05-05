#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the code
 * Return: always 0 (Success)
 */
int main(void)
{
int i;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", i);
}
else if (n < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
return (0);
}
