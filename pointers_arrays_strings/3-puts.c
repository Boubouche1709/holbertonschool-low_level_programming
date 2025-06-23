#include "main.h"

/**
 * _puts - print a string
 * @str: string to print
 */

void _puts(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
_putchar(*str);
_puts(str + 1);
}
