#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print a diagonal
 *
 * @n: print random number of a character
 *
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}

