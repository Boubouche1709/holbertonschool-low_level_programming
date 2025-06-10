#include "main.h"

/**
 * print_last_digit - print the last digit of an int
 * @i: int to check
 * Return: print_last_digit
 */

int print_last_digit(int i)
{
int last_digit = i % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
_putchar(last_digit + '0');
}
else
{
_putchar(last_digit + '0');
}
return (last_digit);
}
