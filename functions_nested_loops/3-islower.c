#include "main.h"
#include <stdio.h>

/**
 * _islower - check the character if is lowercase
 *
 * @c: Character to check
 *
 * Return: 1 for success 0 otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
