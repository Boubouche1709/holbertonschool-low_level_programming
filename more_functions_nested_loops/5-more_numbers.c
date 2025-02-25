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
char *numbers;
while (i < 10)
{
numbers = "01234567891011121314\n";
j = 0;
while (numbers[j] != '\0')
{
_putchar(numbers[j]);
j++;
}
i++;
}
}
