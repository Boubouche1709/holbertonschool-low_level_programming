#include "main.h"

/**
 * _strcat - copy a string
 * @src: string to copy
 * @dest: copy of the string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j = 0;
for (i = 0; dest[i] != '\0'; i++)
{
j++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[j] = src[i];
j++;
}
return (dest);
}
