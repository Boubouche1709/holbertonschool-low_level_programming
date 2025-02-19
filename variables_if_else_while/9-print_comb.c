#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Numbers must be separated by ", " and should be in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
