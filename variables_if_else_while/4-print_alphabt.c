#include <stdio.h>

/**
 * main - entry point of the code
 * Return: alaways 0 (Success)
 */
int main(void)
{
char c[] = "abcdfghijklmnoprstuvwxyz";
int i = 0;
while (c[i])
{
putchar(c[i]);
i++;
}
putchar('\n');
return (0);
}
