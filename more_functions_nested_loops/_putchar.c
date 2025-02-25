#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * 
 * @c: The character to print
 *
 * Return: Success 1, otherwise 0
 * 
 */

int _putchar(char c)
{
return (write(1, &c, 1) == 1) ? 1 : 0;
}
