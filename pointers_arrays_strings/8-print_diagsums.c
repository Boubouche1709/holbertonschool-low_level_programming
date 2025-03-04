#include "main.h"
#include <stdio.h>

/**
 * print_number - print an int
 * @n: int to print
 */
void print_number(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10)
{
print_number(n / 10);
}
putchar(n % 10 + '0');
}

/**
 * print_diagsums - print the sum of two diagonal
 * @a: array of the matrix
 * @size: size of the square
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}
print_number(sum1);
putchar(',');
putchar(' ');
print_number(sum2);
putchar('\n');
}
