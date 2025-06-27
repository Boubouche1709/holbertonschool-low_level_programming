#include <stdio.h>
/**
 * main -entry point of the code
 * Return: always 0 success
 */
int main(void)
{
char c, d;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (d = 'a'; d <= 'f'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
