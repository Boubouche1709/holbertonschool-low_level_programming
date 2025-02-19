#include <stdio.h>

/**
 * main - Entry of the program
 *
 * Description: print the alphabet in lowercase in reverse sens
 *
 * Return: always 0 (success)
 */

int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
