#include "main.h"

/**
 * times_table - print table from 0 to 9
 */

void times_table(void)
{
int a, b, multiple;
for (a = 0; a <= 9; i++)
{
for (b = 0; b <= 9; b++)
{
multiple = a * b;
if (multiple < 11)
{
_putchar(multiple + '0');
}
else
{
_putchar((multiple / 10) + '0');
_putchar((multiple % 10) + '0');
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n')
}
}
