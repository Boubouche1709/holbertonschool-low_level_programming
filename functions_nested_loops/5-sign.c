#include "main.h"

/**
 * print_sign - Check if is a sign
 *
 * @n: Sign to check
 *
 * Return: 1 if is > 0, 0 if is = 0, -1 if is < 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
