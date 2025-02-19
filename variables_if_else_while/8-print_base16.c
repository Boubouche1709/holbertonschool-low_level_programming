#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Description: Prints all single digit numbers of base 16 starting from 0 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = 0;
while ( num <= 9 )
{
putchar( num + '0' );
num++;
}
num = 0;
while ( num <= 5 )
{
putchar( num + 'a' );
num++;
}
putchar('\n');
return (0);
}
