#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * description: Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
