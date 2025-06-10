#include "main.h"

/**
 * print_sign - print the singn before a digit
 * @n: integer to check
 * Return: 1 if is greater than 0, 0 if is 0, -1 otherwise
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
