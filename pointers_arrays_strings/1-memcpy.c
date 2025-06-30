#include "main.h"

/**
 * _memcpy - copy a string
 * @src: string to copy
 * @dest: copy of the string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
