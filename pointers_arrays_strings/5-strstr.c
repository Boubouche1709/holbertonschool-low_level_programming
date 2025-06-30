#include "main.h"

/**
 * _strstr - find the first occurence
 * @haystack: string to copy
 * @needle: bytes
 * Return: NULL or s
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i] == needle[j])
		return (needle);
	}
}
return ('\0');
}
