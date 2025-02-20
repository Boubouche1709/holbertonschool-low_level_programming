#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Print exactly the sentence with putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char *str = "_putchar";
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
return (0);
}
