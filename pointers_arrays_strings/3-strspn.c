#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to copy
 * @accept: a prefix substring
 * Return: bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int len;
for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
		len++;
		break;
		}
	}
	if (s[i] != accept[j])
	{
		return (len);
	}
	}
return (len);
}
