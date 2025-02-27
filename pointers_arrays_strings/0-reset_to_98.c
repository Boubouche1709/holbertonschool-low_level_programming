#include "main.h"
#include <stdio.h>

/** 
 * main - Entry point of the code
 *
 * Description:
 *
 * Return: Alaways 0 (Success)
 */

int main(void)
{
int n;
n = 402;
if (n >= 100)
{
_putchar((n / 100) + '0');
_putchar((n /10) % 10) + '0');
}
else if (n >= 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
_putchar('\n');
reset_to_98(&n);
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar('\n');
return (0);
}
