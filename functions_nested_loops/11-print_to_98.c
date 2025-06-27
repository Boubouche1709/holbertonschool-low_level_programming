:x
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print a list of number
 * @n: int to print
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("%d\n", n);
}
