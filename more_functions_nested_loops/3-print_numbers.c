#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print the number
 *
 * Description: print list of numbers
 */

void print_numbers(void)
{
char *str = "0123456789$";
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
