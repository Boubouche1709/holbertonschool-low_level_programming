#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if the chrracter is a uppercase
 * @c: character to check
 * Return: 1 if is a lowercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
