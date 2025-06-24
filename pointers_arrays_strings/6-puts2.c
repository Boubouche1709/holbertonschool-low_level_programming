#include "main.h"

/**
 * puts2 - print a string
 * @str: string to print
 */

void puts2(char *str)
{
int n;
for (n = 0; str[n] != '\0'; n += 2)
{
_putchar(str[n]);
}
{
_putchar('\n');
}
}
