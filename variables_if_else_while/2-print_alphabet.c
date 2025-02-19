#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
