#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Write a script
 *
 * @c: Write a characters
 *
 * Return: Always 1 (Success)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * main - Entry point of the program
 *
 * Description: Print exactly _putchar with putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
putchar('_');
putchar('p');
putchar('u');
putchar('t');
putchar('c');
putchar('h');
putchar('a');
putchar('r');
putchar('\n');
return (0);
}
