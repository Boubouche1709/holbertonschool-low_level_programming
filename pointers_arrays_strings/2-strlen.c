#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: the length of a string
 */

int _strlen(char *s)
{
int len = 0;
while (s[len])
{
len++;
}
return (len);
}
