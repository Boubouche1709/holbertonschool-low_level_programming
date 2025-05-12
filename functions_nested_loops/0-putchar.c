#include <stdio.h>
/**
 * main - entry point of the code
 * Return: always 0 (Success)
 */
int main(void)
{
int i = 'a';
while (i <= 'z')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
