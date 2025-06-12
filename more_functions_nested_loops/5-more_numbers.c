#include "main.h"

/**
 * more_numbers - function to print 0 to 14 ten times
 */

void more_numbers(void)
{
char i = 0;
char j;
while (i < 10)
{
j = 0;
while (j <= 14)
{
    if (j > 9)
		_putchar((j / 10) + '0');
	_putchar((j % 10) + '0');
	j++;
}
i++;
_putchar('\n');
}
}
