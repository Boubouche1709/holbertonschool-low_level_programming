#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @src: string to push
 *
 * @dest:final string
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
