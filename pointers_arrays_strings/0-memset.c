#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: the string
* @n: the first byte
* @b: the constant byte
* Return: the string
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
