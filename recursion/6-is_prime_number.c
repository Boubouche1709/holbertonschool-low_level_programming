#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - help to check a prime number
 * @n: number to check
 * @i: current divide
 * Return: 1 for a prime number, otherwise 0
 */
int is_prime_helper(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - check if is prime number
 * @n: number to check
 * Return: 1 for a prime number, otherwise 0
 */
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
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
