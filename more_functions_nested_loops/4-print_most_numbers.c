#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print the number
 *
 * Description: print list of numbers
 */

void print_most_numbers(void)
{
char *str = "01356789\n";
while (*str)
{
_putchar(*str);
str++;
}
}
