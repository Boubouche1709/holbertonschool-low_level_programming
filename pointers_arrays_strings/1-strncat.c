#include "main.h"

/**
 * _strncat - copy a string
 * @src: string to copy
 * @dest: copy of the string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j = 0;
for (i = 0; dest[i] != '\0'; i++)
{
j++;
}
for (i = 0; src[i] != '\0'; i++)
{
if (i < n)
{
dest[j] = src[i];
j++;
}
}
return (dest);
}
