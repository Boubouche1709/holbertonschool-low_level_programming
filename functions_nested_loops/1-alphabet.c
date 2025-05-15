#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function to print alphabet
 */
void print_alphabet(void)
{
char c[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (c[i] != '\0')
{
putchar(c[i]);
i++;
}
putchar('\n');
return;
}
