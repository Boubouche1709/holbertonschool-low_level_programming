#include "main.h"

/**
 * print_rev - print a string
 * @s: string to print
 */

void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
s--;
while (*s != '\0')
{
_putchar(*s);
s--;
}
_putchar('\n');
}
