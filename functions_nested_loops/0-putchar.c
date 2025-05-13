#include <stdio.h>
/**
 * main - entry point of the code
 * Return: always 0 (Success)
 */
int main(void)
{
char c[] = "_putchar";
int i = 0;
while (c[i] != '\0')
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
