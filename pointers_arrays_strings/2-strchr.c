#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a character in a string
 *
 * @s: string to search
 *
 * @c: character to locate
 *
 * Return: pointer to the char in string, or NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
