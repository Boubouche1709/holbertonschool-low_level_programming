#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - function to print the alphabet
 * @c: character to print
 */

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
