#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse followed by a new line
 *
 * @s: pointer to a char
 *
 */

void print_rev(char *s)
{
int length = 0;
int i;
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
