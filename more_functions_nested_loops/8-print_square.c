#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square
 *
 * @size: print random number of a character
 *
 */

void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
