#include "main.h"

/**
 * times_table - code to print the multiplications table from 0 to 9
 */
void times_table(void)
{
int i;
int j;
int result;
for(i = 0; i <= 9; i++)
{
for(j = 0; j <= 9; j++)
{
	result = i * j;
	_putchar(result);
	_putchar(',');
	_putchar(' ');
}
}
_putchar('\n');
}
