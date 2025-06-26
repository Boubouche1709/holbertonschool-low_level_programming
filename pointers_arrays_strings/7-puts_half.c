#include "main.h"

/**
 * puts_half - print a string
 * @str: string to print
 */

void puts_half(char *str)
{
int length_of_the_string = 0;
int len;
while (str[length_of_the_string] != '\0')
{
length_of_the_string++;
}
for (len = (length_of_the_string + 1) / 2; len < length_of_the_string; len++)
{
_putchar(str[len]);
}
_putchar('\n');
}
