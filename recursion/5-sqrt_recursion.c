#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - help to find root number
 * @n: number to the square root
 * @i: number from the square root
 * Return: square root of n or -1 for error
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - return to square root of n
 * @n: number to check
 * Return: square root of n or -1 for error
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return _sqrt_helper(n, 0);
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
