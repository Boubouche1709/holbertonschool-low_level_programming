#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Description: Check teh lowercase character
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c = 'a';
if (_islower(c))
{
_putchar(c);
_putchar('\n');
}
else
{
_putchar('N');
_putchar('\n');
}
c = 'A';
if (_islower(c))
{
_putchar(c);
_putchar('\n');
}
else
{
_putchar('N');
_putchar('\n');
}
return (0);
}
