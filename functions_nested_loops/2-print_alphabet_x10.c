#include "main.h"

/**
 * print_alphabet_x10 - function to print the alphabet ten times
 */

void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i < 10)
{
	c = 'a';
	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
i++;
_putchar('\n');
}
}
