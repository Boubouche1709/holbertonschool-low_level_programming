#include <stdio.h>

/**
 * main - entry point of the code
 * Return: always 0 Success
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
