#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Make a number list from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
int a = 0;
while (a <= 9)
{
putchar(a + '0');
a++;
}
putchar('\n');
}
