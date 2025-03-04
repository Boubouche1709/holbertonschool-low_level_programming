#include "main.h"
#include <stdio.h>

/**
 * _strspn - length of a prefix substring
 *
 * @s: string to scanned
 *
 * @accept: string contain character
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int j;
int match;
while (*s)
{
match = 0;
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
{
match = 1;
length++;
break;
}
}
if (!match)
{
break;
}
s++;
}
return (length);
}
