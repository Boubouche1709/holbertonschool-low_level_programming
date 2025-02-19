#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Make a number list from 0 to 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = 0;
while (a <= 9)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}
