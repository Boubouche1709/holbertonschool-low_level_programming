#include "main.h"
#include <stdio.h>

/**
 * factorial - return factorial of a number
 * @n: int to calculate
 * Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}

/**
 * _print_number - print an int
 * @n: int to print
 */
void _print_number(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10)
{
_print_number(n / 10);
}
putchar((n % 10) + '0');
}
