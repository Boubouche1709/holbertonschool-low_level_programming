#include "main.h"

/**
 * _strcmp - copy a string
 * @s1: string to copy
 * @s2: copy of the string
 * Return: 0 if is equal, 1 if is positive, -1 if is negative
 */

int _strcmp(char *s1, char *s2)
{
if (s1 == s2)
return (0);
else if (s2 > s1)
return (-1);
else
return (1);
}
