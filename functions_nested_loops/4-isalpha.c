#include "main.h"

/**
 * _isalpha - Check the character is a letter
 *
 * @c: character to check
 *
 * Return: 1 if is a letter, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
