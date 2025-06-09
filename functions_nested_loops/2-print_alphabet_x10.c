#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - function to print the alphabet
 */

void print_alphabet_x10(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
