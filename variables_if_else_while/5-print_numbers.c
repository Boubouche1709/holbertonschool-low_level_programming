#include <stdio.h>
/**
 * main - entry point of the code
 * Return: always 0 (Success)
 */
int main(void)
{
char c[] = "0123456789";
int i = 0;
while (c[i])
{
putchar(c[i]);
i++;
}
putchar('\n');
return (0);
}
