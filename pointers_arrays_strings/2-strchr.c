#include "main.h"
#include <stddef.h>

/**
 * _strchr - find a char
 * @s: string to copy
 * @c: copy of the string
 * Return: NULL or c
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
if (s[i] == '\0')
{
return (s + i);
}
return ('\0');
}
