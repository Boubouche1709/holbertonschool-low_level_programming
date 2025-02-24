#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if is a digit
 *
 * @c: Number to check
 *
 * Return: 1 if is a digit, 0 otherwise
 */

int _isdigi(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
