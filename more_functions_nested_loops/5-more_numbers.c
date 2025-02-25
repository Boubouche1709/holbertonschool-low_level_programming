#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print the numbers
 *
 *Description: print 10 times from 0 to 14
 */

void more_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
j = 0;
while (j <= 14)
{
if (j >= 10)
{
_putchar('1');
_putchar((j % 10) + '0');
}
else
{
_putchar(j + '0');
}
j++;
}
_putchar('\n');
i++;
}
}
