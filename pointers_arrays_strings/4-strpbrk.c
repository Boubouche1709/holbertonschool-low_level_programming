#include "main.h"

/**
 * _strpbrk - find a char
 * @s: string to copy
 * @accept: bytes
 * Return: NULL or c
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		return (s + i);
	}
}
return ('\0');
}
