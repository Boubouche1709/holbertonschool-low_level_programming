#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _isalpha - check if the chrracter is a lowercase
 * @c: character to check
 * Return: 1 if is a lowercase, 0 otherwise
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
