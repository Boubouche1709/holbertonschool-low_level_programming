#include "main.h"

/**
 * times_table - print table from 0 to 9
 */

void times_table(void)
{
int a, b, multiple;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
multiple = a * b;
if (multiple < 10)
{
_putchar(multiple + '0');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar((multiple / 10) + '0');
_putchar((multiple % 10) + '0');
_putchar(' ');
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
