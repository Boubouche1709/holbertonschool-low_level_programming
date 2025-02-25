#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print string number
 *
 * @c: numbers
 */

void print_most_numbers(void)
{
int i;
char *str = "01356789\n";
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
