#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * _putchar - write the character
 *
 * @c: character to print
 *
 * Return: On success 1
 *
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
