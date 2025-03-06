#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return value of x power y
 * @x: int
 * @y: power
 * Return: power x to y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
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
