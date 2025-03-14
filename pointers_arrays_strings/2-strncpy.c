#include "main.h"
#include <stdio.h>

/**
 * _strncpy - concatenates two strings
 *
 * @src: string to push
 *
 * @dest: final string
 *
 * @n: max bytes to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
