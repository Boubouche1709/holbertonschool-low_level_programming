#include "main.h"

/**
 * _isalpha - check if the chrracter is a lowercase
 * @c: character to check
 * Return: 1 if is a lowercase, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
