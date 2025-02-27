#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the string from src to dest
 *
 * @src: pointer to source
 *
 * @dest: pointer to destiny
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
