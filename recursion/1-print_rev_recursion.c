#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: pointer to string
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
