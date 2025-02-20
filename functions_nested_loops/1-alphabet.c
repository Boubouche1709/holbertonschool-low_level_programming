#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Description: Print the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; alphabet[i] != '\0'; i++)
{
_putchar(alphabet[i]);
}
_putchar('\n');
}
