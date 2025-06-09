#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - print the last digit of an int
 * @i: int to check
 * Return: print_last_digit
 */

int print_last_digit(int i)
{
int print_last_digit = i % 10;
_putchar(print_last_digit + '0');
return (print_last_digit);
}
