#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _islower - check if the chrracter is a lowercase
 * @c: character to check
 * Return: 1 if is a lowercase, 0 otherwise
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
