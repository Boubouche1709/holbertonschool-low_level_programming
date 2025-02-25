#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print a triangle
 *
 * @size: print random number of a character
 *
 */

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (k = 0; k < i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
